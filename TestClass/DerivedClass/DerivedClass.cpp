#include <iostream>
#include "../DerivedClass/DerivedClass.h"

using namespace std;

void DerivedClass::bar() const {
    cout << "DerivedClass::bar()" << endl;
}

void DerivedClass::foo() const {
    cout << "DerivedClass::foo()" << endl;
}
