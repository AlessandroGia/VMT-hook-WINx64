#ifndef VMT_HOOK_WINX64_UTILITIES_IMPL_H
#define VMT_HOOK_WINX64_UTILITIES_IMPL_H

#include <windows.h>

template <typename T>
T readMem(void * adr) {
    return *((T*)adr);
}

template <typename T>
void writeMem(void * adr, T val) {
    *((T*)adr) = val;
}

template <typename T>
void protectMem(DWORD* adr, DWORD prot, DWORD* oldProt) {
    VirtualProtect(adr, sizeof(T), prot, oldProt);
}

#endif
