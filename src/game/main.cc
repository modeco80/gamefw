//
// GameFW
// (c) 2019 modeco80 under applicable license.
//

#include "platform.h"

#ifndef _WIN32
int main(int argc, char** argv) {
#else
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrev, LPSTR szCmdLine, int nCmdShow) {
    int argc = __argc;
    char** argv = __argv;
#endif 
    

    return 0;
}