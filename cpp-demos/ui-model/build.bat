@echo off
echo Building Steel DLL...
g++ -c -fPIC -O2 steel.cpp -o steel.o
g++ -shared -o steel.dll steel.o -Wl,--out-implib,steel.lib -static-libgcc -static-libstdc++

echo Building Rubber DLL...
g++ -c -fPIC -O2 rubber.cpp -o rubber.o
g++ -shared -o rubber.dll rubber.o -Wl,--out-implib,rubber.lib -static-libgcc -static-libstdc++

echo Building Loader EXE...
g++ -O2 program.cpp -o program.exe -static-libgcc -static-libstdc++

echo Cleanup object files...
del *.o *.lib

echo Build complete! Files: steel.dll, rubber.dll, program.exe
echo Run: .\\program.exe steel.dll (or rubber.dll)
