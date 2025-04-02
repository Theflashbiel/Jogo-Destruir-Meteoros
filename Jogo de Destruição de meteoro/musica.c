#include "aviao.h"
#include <stdio.h>
#include <curses.h>
#include <time.h>
#include <windows.h>
void Tocarmusica(musicaTocar * musicaTocar){

    if (musicaTocar->tecla == 'a'){
        PlaySound ("musica.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
    else if (musicaTocar->tecla == 98||musicaTocar->tecla=='b'){
        PlaySound ("musica2.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
    else if (musicaTocar->tecla == 99||musicaTocar->tecla == 'c'){
        PlaySound ("musica3.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
    else if (musicaTocar->tecla == 100|| musicaTocar->tecla == 'd'){
        PlaySound ("musica4.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
    else if (musicaTocar->tecla == 101|| musicaTocar->tecla == 'e'){
        PlaySound ("musica5.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
    else if (musicaTocar->tecla == 102||musicaTocar->tecla == 'f'){
        PlaySound ("musica6.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
     else if (musicaTocar->tecla == 103 || musicaTocar->tecla == 'g'){
        PlaySound ("musica7.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
     else if (musicaTocar->tecla == 104||musicaTocar->tecla == 'h'){
        PlaySound ("musica8.wav", NULL, SND_ASYNC | SND_FILENAME|SND_LOOP);
    }
}
void escreverNomeMusica()
{
    setColor(COLOR_CYAN,COLOR_BLACK,0);
    FILE *mu = fopen ("musicanome.txt","r");
    while (!feof(mu))
    {
        char m = fgetc(mu);
        printw("%c",m);
    }
    fclose(mu);
}
