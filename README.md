# Project-X: C++ Case Studies

A collection of 5 comprehensive C++ systems exploring different architectural and programming concepts.

## Systems

### System 1: [Boarding House Management]
- **Branch:** `system-1/`
- **Description:** [A management system designed to manage rooms, tenants and payments with a focus on OOP principles and data structures.]

### How to Run
Run the following command existing in the root folder:
```bash
./build.bat
```

Or create your own batch file:
```batch
@echo off
REM build script

REM create folder if not exist 
if not exist build (
    mkdir build
)

REM compile all cpp files
g++ src\main.cpp src\BoardingHouse.cpp src\Room.cpp src\Tenant.cpp -Iinclude -o build\manager.exe

REM check if compilation succeeded
if &ERRORLEVEL& == 0 (
    echo Compilation Successful!
    echo Running program...
    build\manager.exe 
) else (
    echo Compilation failed!
)

echo. 
pause
```