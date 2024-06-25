#include <iostream>
#include "BaseClass.h"

using namespace std;

void BaseClass::foo() const {
    cout << "BaseClass::foo()" << endl;
}

void BaseClass::bar() const {
    cout << "BaseClass::bar()" << endl;
}
