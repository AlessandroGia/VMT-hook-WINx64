#ifndef VMT_HOOK_WINX64_DERIVEDCLASS_H
#define VMT_HOOK_WINX64_DERIVEDCLASS_H

#pragma once

#include "../BaseClass/BaseClass.h"

class DerivedClass : public BaseClass {
public:
    DerivedClass() = default;
    ~DerivedClass() override = default;

    void foo() const override;
    void bar() const override;
};

#endif
