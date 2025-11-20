#include "steel.h"

extern "C" __declspec(dllexport) __stdcall UIFactory* createFactory() {
    return new SteelUIFactory();
}