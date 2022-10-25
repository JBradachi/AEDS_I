#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX  255

typedef struct{
    char marca[MAX];
    char modelo[MAX];
    int ano;
}TAD_Carro;

int IniciaCarro(TAD_Carro *carro);
void ImprimeCarro(TAD_Carro *carro);


