#include <curses.h>
#include <stdio.h>
#include <stdlib.h>

void ajuda()
{

    FILE *ajd = fopen("ajudacont.txt","r");
    while (!feof(ajd))
    {
        setColor(COLOR_YELLOW,COLOR_BLACK,0);
        char ad = fgetc(ajd);
        printw("%c",ad);
    }
    fclose(ajd);
}

