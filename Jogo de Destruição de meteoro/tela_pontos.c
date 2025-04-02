#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"
int * leArquivosPontuacoes(const char * nomeArquivo, int * tam)
{
    *tam = 0;
    int i=0, numero = 0;

    FILE * arquivo;
    arquivo = fopen(nomeArquivo, "r");
    while(!feof(arquivo))
    {

        fscanf(arquivo,"%d", &numero);
        *tam +=1;


    }
    *tam -= 1;

    int * vetor = malloc(*tam*sizeof(int));

    fseek(arquivo,0,SEEK_SET);
    for(i = 0; i < *tam; i++)
    {
        fscanf(arquivo, "%d", &numero);
        vetor[i] = numero;
    }
    fclose(arquivo);
    return vetor;

}

void imprimeNumeros(const int *v, int n)
{
    int i = 0;
    int x = 60, y = 6;
    move(4, 56);
    printw("Pontucoes");
    for(i = n-1; i > -1; i--){
        move(y,x);
        printw("%d", v[i]);
        y++;
    }

move(y+1, 50);
    printw("Clique 1 para jogar novamente");

}

void ordenar(int * vetor, int n)
{

    int k, j, aux;
    for (k = 1; k < n; k++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void escreverNumeros(int p){
    FILE * arq = fopen("pontuacoes.txt", "a");
    fprintf(arq, "%d\n", p);
    fclose(arq);
}
