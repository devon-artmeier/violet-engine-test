@echo off
cmake --build build --config Debug
copy build\violet-engine\dependencies\SDL\Debug\SDL3.dll build\Debug\SDL3.dll
copy data\*.* build\Debug\*.*
pause