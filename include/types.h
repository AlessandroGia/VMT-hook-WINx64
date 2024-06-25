#ifndef VMT_HOOK_WINX64_TYPES_H
#define VMT_HOOK_WINX64_TYPES_H

template <typename T, typename... Args>
using fun = T (*)(Args...); // generic function pointer

#endif
