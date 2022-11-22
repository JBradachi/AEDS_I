#include <stdio.h>
#include <stdlib.h>

int x = 9;

typedef struct{
    int carta;
    char nipe;
}Tcarta;

typedef struct{
    Tcarta vCarta[9];
    int ultimo;
}Tbaralho;

int inicia(Tbaralho* Baralho);
int faz_mao(Tbaralho* Baralho);
void Selecao (Tbaralho* Baralho, int x);
void Insercao (Tbaralho* Baralho, int x );
