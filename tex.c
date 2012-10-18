#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "robco.h"

void stripNewLine( char *str, int size ){
    int i;
    /* remove the null terminator */
    for(i = 0; i < size; ++i){
        if(str[i] == '\n'){
            str[i] = '\0';
            
            return;
        }
    }
}

void wipeScreen(void){
    int screenHeight = 22;
    int i;
    
    for(i=0; i<screenHeight; ++i){
        putchar('\n');
        usleep(80000);
    }
    return;
}

void flashScreen(void){
    int screenHeight = 22;
    int i;
    
    for(i=0; i<screenHeight; ++i){
        putchar('\n');
    }
    return;
}


void texDisp(char texStr[53]){
    //Sleeps for 80,000 microseconds, then prints a line of text
    usleep(80000);
    printf("%s\n",texStr);
}

void texType(char texStr[53]){
    //Writes a single character of array texStr then sleeps for 20,000 microseconds, until a NULL character is encountered
    int i = 0;
    
    while(texStr[i] != '\0'){
        putchar(texStr[i]);
        fflush(stdout);
        usleep(20000);
        i++;
    }
}

void texPrompt(void){
    usleep(80000);
    printf(">");
    fgets(gbl_i, 53, stdin);
    stripNewLine(gbl_i, 53);
}