#include "TAD_carta.h"

int inicia(Tbaralho* Baralho){
    Baralho->ultimo = 0;
    return 0;
}

int faz_mao(Tbaralho* Baralho){
    int a;
    char aux2, aux1;

    for(a = 0; a<x; a++){
        scanf("%c%c ", &aux1, &aux2);
        switch (aux1)
        {
        case 'K':
            aux1 = 13;
            break;
        case 'Q':
            aux1 = 12;
            break;
        case 'J':
            aux1 = 11;
            break;
        default:
            aux1 = atoi(aux1);
            break;
        }
        Baralho->vCarta[a].carta = aux1;
        Baralho->vCarta[a].nipe = aux2;
    }
}

void Selecao (Tbaralho* Baralho, int x){

    int i, j, Min;
    Tcarta aux;
    for (i = 0; i < x - 1; i++){
    Min = i;
    for (j = i + 1 ; j < x; j++)
        if ( Baralho->vCarta[j].carta < Baralho->vCarta[Min].carta)
            Min = j;
    aux = Baralho->vCarta[j];
    Baralho->vCarta[Min] = Baralho->vCarta[i];
    Baralho->vCarta[i] = aux;
 }
}

void Insercao (Tbaralho* Baralho, int x ){
    int i,j;
    Tcarta aux;
    for (i = 1; i < x; i++){
        aux = Baralho->vCarta[i];
        j = i - 1;
        while ( ( j >= 0 ) && ( aux.carta < Baralho->vCarta[j].carta ) ){
            Baralho->vCarta[j + 1] = Baralho->vCarta[j];
            j--;
        }
        Baralho->vCarta[j + 1] = aux;
    }
}
