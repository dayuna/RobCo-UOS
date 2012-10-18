#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "robco.h"

int main(void)
{
    screenWelcome();
    screenFile();
    screenHalt();
    screenInitialize();
    flashScreen();
    return 0;
}