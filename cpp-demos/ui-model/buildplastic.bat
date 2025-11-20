@echo off
echo Building Plastic DLL...
g++ -c -fPIC -O2 plastic.cpp -o plastic.o
g++ -shared -o plastic.dll plastic.o -Wl,--out-implib,plastic.lib -static-libgcc -static-libstdc++
