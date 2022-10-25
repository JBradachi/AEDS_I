#include "TAD_Carro.h"

#define max 255

typedef struct{
    TAD_Carro vCarro[max];
    int topo;
}TPilha;

void FZPVazia(TPilha* pPilha);
int VPVazia(TPilha* pPilha);
int Empilha(TPilha* pPilha, TAD_Carro* carro);
int Desempilha(TPilha* pPilha, TAD_Carro* carro);
int Tamanho(TPilha* pPilha);