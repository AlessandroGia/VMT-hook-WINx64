#include <iostream>
#include "../include/headers.h"

// -------------------- Test Classes -------------------- //

class Base {
public:
    virtual void f() {
        std::cout << "A::f()" << std::endl;
    }
    virtual void g() {
        std::cout << "A::g()" << std::endl;
    }
};

class Derived : public Base {
public:
    void f() override {
        std::cout << "B::f()" << std::endl;
    }
    void g() override {
        std::cout << "B::g()" << std::endl;
    }
};

// -------------------- -------------------- //

using ofun = void (__thiscall*) (void*); // Original function
using hfun = void (*) (ofun, void*); // Hook function

void hook(ofun *f, void* self) {

    // Code to run before original function

    (*f)(self); // Call original function

    // Code to run after original function

}

int main() {
    auto *derived = new Derived();
    auto *vtable = readMem<DWORD*>(derived); // VMT address

    int index = 0;
    auto originFun = (ofun)(*(vtable + index));

    DWORD oldProt;
    protectMem<DWORD>(vtable, PAGE_READWRITE, &oldProt); // Change protection page
    writeMem<DWORD>(vtable + index, (DWORD)hook);
    protectMem<DWORD>(vtable, oldProt, &oldProt); // Restore protection page

    auto thi = (hfun)(*(vtable + index));
    thi((ofun)&originFun, derived);

    delete derived;
    return 0;
}
