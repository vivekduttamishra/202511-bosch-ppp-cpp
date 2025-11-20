#include "plastic.h"

extern "C" __declspec(dllexport) __stdcall UIFactory* createFactory() {
    return new PlasticUIFactory();
}