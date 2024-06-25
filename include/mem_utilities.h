#ifndef VMT_HOOK_WINX64_MEM_UTILITIES_H
#define VMT_HOOK_WINX64_MEM_UTILITIES_H

#include <windows.h>

template <typename T>
T readMem(LPVOID adr); // read from address in memory

template <typename T>
void writeMem(LPVOID adr, T val); // write to address in memory

template <typename T>
void protectMem(DWORD* adr, DWORD prot, DWORD* oldProt); // change protection page

#include "mem_utilities_impl.h"

#endif
