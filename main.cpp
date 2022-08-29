#include <iostream>
#include <windows.h>

using namespace std;
/*hInstance is something called a "handle to an instance" or "handle to a module." The operating system uses this value to identify the executable (EXE) when it is loaded in memory.
The instance handle is needed for certain Windows functions—for example, to load icons or bitmaps.
hPrevInstance has no meaning. It was used in 16-bit Windows, but is now always zero.
pCmdLine contains the command-line arguments as a Unicode string.
nCmdShow is a flag that says whether the main application window will be minimized, maximized, or shown normally. */

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hprevinstance, LPSTR args, int ncmdshow)
{
    MessageBox(NULL,"hello", "my first gui" , MB_DEFBUTTON1);
    return 0;
}
