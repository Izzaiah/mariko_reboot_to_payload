#include <stdio.h>
#include <string.h>
#include <switch.h>

int main(int argc, char **argv)
{
    consoleInit(NULL);

    spsmInitialize();
    spsmShutdown(true);
    
    consoleExit(NULL);
    return 0;
}