#include "rubber.h"

extern "C" __declspec(dllexport) __stdcall UIFactory* createFactory() {
    return new RubberUIFactory();
}