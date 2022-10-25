#include "TAD_Pilha.h"

void FZPVazia(TPilha* pPilha){
    pPilha->topo = 0;
}

int VPVazia(TPilha* pPilha){
    return(pPilha->topo == 0);
}

int Empilha(TPilha* pPilha, TAD_Carro* carro){
    if(pPilha->topo == max)
        return 0;

    pPilha->vCarro[pPilha->topo] = *carro;
    pPilha->topo++;
    return 1;
}

int Desempilha(TPilha* pPilha, TAD_Carro* carro){
    if(pPilha->topo == max)
        return 0;

    pPilha->topo--;
    carro = &(pPilha->vCarro[pPilha->topo]);

}

int Tamanho(TPilha* pPilha){
    return(pPilha->topo);
}
