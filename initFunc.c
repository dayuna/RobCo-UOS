#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "robco.h"

void screenWelcome(void)
{
    texType("WELCOME TO ROBCO INDUSTRIES (TM) TERMLINK\n");
    texDisp("\0");
    texPrompt();
    if(strcmp(gbl_i, "SET TERMINAL/INQUIRE") == 0)
    {
        texDisp("\0");
        return;
    }
    else
    {
        texDisp("\0");
        texType("INVALID FUNCTION OR ARGUMENT(S)\n");
        texDisp("\0");
        screenWelcome();
    }
}

void screenHalt(void)
{
    texPrompt();
    if(strcmp(gbl_i, "SET HALT RESTART/MAINT") == 0)
    {
        texDisp("\0");
        return;
    }
    else
    {
        texDisp("\0");
        texType("INVALID FUNCTION OR ARGUMENT(S)\n");
        texDisp("\0");
        screenHalt();
    }

}

void screenFile(void)
{
    texType("RIT-V300\n");
    texDisp("\0");
    texPrompt();
    if(strcmp(gbl_i, "SET FILE/PROTECTION=OWNER:RWED ACCOUNTS.F") == 0)
    {
        return;
    }
    else
    {
        texDisp("\0");
        texType("INVALID FUNCTION OR ARGUMENT(S)\n");
        texDisp("\0");
        screenFile();
    }
}

void screenInitPrompt(void)
{
    texPrompt();
    if(strcmp(gbl_i, "RUN DEBUG/ACCOUNTS.F") == 0)
    {
        texDisp("\0");
        return;
    }
    else
    {
        texDisp("\0");
        texType("INVALID FUNCTION OR ARGUMENT(S)\n");
        texDisp("\0");
        screenInitPrompt();
    }
}

void screenInitialize(void)
{
    texType("Initializing Robco Industries(TM) MF Boot Agent v2.3.0\n");
    texType("RETROS BIOS\n");
    texType("RBIOS-4.02.08.00 52EE5.E7.E8\n");
    texType("Copright 2201-2203 Robco Ind.\n");
    texType("Uppermem: 64 KB\n");
    texType("Root (5A8)\n");
    texType("Maintenance Mode\n");
    texDisp("\0");
    
    screenInitPrompt();
}