#include "aviao.h"
#include <stdio.h>
#include <curses.h>
#include <time.h>


void reconfig_aviao_meteoros(aviao* aviao,meteoro * bloco, meteoro * lanterna, meteoro * quadriculado, meteoro * triangulo, meteoro * circulo)
{
    //aviao
    aviao->tecla_clicada = -1;
    aviao->ultima_tecla = -1;
    aviao->pos_x = 50;
    aviao->pos_y = 26;

      //bloco-quadrado

    bloco->x= rand() % 80 + 10;
    bloco->y = 0;
    bloco->estado = 1;
    bloco->tamanho = 3;
    bloco->velocidade = 10;

    //bloco-laterna
    lanterna->x = rand() % 80 + 10;
    lanterna->y = -15;
    lanterna->estado = -15;
    lanterna->tamanho = 3;
    lanterna->velocidade = 50;

        //bloco-quadriculados
    quadriculado->x = rand() % 80 + 10;
    quadriculado->y = -80;
    quadriculado->estado = -80;
    quadriculado->tamanho = 3;
    quadriculado->velocidade = 40;

    //bloco-trangulares
    triangulo->x = rand() % 60 + 10;
    triangulo->y = -100;
    triangulo->estado = -100;
    triangulo->tamanho = 3;
    triangulo->velocidade = 30;

    //blocos-circulares
    circulo->x = rand() % 70 + 12;
    circulo->y = -200;
    circulo->estado = -200;
    circulo->tamanho = 5;
    circulo->velocidade = 20;

}

