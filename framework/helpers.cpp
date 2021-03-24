// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Helper functions

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>
#include "helpers.h"


// Helper function to get the module base address
uintptr_t GetBaseAddress() {
    return (uintptr_t) GetModuleHandleW(L"GameAssembly.dll");
}

// Helper function to open a new console window and redirect stdout there
void NewConsole() {
    AllocConsole();
    freopen_s((FILE**) stdout, "CONOUT$", "w", stdout);
}