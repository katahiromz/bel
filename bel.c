#include <windows.h>

INT WINAPI
WinMain(HINSTANCE   hInstance,
        HINSTANCE   hPrevInstance,
        LPSTR       lpCmdLine,
        INT         nCmdShow)
{
    Beep(0x1000, 50);
    Beep(0x800, 450);
    return 0;
}
