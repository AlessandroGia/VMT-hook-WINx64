#include <iostream>
#include "../TestClass/DerivedClass/DerivedClass.h"
#include "../TestClass/BaseClass/BaseClass.h"

int main() {
    auto *derived = new DerivedClass();


    delete derived;
    return 0;
}
