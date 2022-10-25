#include "TAD_Fila.h"

void FFVAzia(TFila* fila){
    fila->pPrimeiro = (Apontador) malloc(sizeof(TCelula));
    fila->pUltimo = fila->pPrimeiro;
    fila->pPrimeiro->pProx = NULL;

}

int FEnfilera(TFila* fila, TAD_Carro* carro){
    Apontador pNovo;
    pNovo = (Apontador) malloc(sizeof(TCelula));
    if(pNovo == NULL)
        return 0;
    
    fila->pUltimo->pProx = pNovo;
    fila->pUltimo =pNovo;
    pNovo->Carro = *carro;
    pNovo->pProx = NULL;
    return 1;
}

int FDesenfilera(TFila* fila, TAD_Carro* carro){
    if (FEhVazia(fila))
        return 0;
    Apontador pAux;

    pAux = fila->pPrimeiro;
    fila->pPrimeiro = fila->pPrimeiro->pProx;
    *carro = fila->pPrimeiro->Carro;
    free(pAux);
}

int FEhVazia(TFila* fila){
    return(fila->pPrimeiro == fila->pUltimo);
}
