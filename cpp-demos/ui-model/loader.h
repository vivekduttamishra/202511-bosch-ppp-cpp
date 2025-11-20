#include <Windows.h>
#include "ui.h"
#include "default-ui.h"

inline UIFactory * loadLibrary(const char* libPath) {
    HMODULE hLib = LoadLibraryA(libPath);
    if (!hLib) {
        cerr << "Failed to load library: Switching to default " << libPath << endl;
        return new DefaultUIFactory();
    }

    typedef UIFactory* (__stdcall* CreateFactoryFunc)();
    CreateFactoryFunc createFactory = (CreateFactoryFunc)GetProcAddress(hLib, "createFactory");
    if (!createFactory) {
        cerr << "Failed to find createFactory function in library: Switching to default " << libPath << endl;
        FreeLibrary(hLib);
        return new DefaultUIFactory();
    }

    return createFactory();
}