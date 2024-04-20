@echo off
cmake --build build --config Release
copy build\violet-engine\dependencies\SDL\Release\SDL3.dll build\Release\SDL3.dll
copy data\*.* build\Release\*.*
pause