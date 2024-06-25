#ifndef VMT_HOOK_WINX64_BASECLASS_H
#define VMT_HOOK_WINX64_BASECLASS_H

#pragma once

class BaseClass {
public:
    BaseClass() = default;
    virtual ~BaseClass() = default;

    virtual void foo() const;
    virtual void bar() const;
};

#endif
