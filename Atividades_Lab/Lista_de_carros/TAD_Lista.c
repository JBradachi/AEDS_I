#include "TAD_Lista.h"

int IniciaLista(TLista *pLista){
    pLista->pPrimeiro = (PointCell) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pPrimeiro->pProx = NULL;
}

int VerificaLV(TLista *pLista){
    return(pLista->pPrimeiro == pLista->pUltimo);
}

int InsereFinal(TLista *pLista, TAD_Carro *carro){
    pLista->pUltimo->pProx = (PointCell) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->Carro = *carro;
    pLista->pUltimo->pProx = NULL;
    return 1;
}

int RemovePrimeiroCarro(TLista *pLista){
    PointCell pAux;
    if (VerificaLV(pLista)){
        return 0;
    }
    pAux = pLista->pPrimeiro;
    pLista->pPrimeiro = pLista->pPrimeiro->pProx;
    free(pAux);
    return 1;
}

int RemoveCarroDado(TLista *pLista, char *carro){
    PointCell pPercorre, pPercorreAux, Aux;
    if (VerificaLV(pLista)){
        return 0;
    }
    pPercorre = pLista->pPrimeiro->pProx;
    pPercorreAux = pLista->pPrimeiro;
    while (pPercorre != NULL) {
        if (strcmp(pPercorre->Carro.modelo, carro) == 0){
                Aux = pPercorre;

                pPercorreAux->pProx = pPercorre->pProx;
                free(Aux);
                return 1;
        }
        pPercorre = pPercorre->pProx;
        pPercorreAux = pPercorreAux->pProx;
    }
    return 0;
}

int ImprimeLista(TLista *pLista){
    if (VerificaLV(pLista))
        return 0;
    PointCell pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux!=NULL){
        ImprimeCarro(&(pAux->Carro));
        pAux = pAux->pProx;
    }
    return 1;
}

int Contador(TLista *pLista){
    PointCell pAux;
    int cont = 0;
    if (VerificaLV(pLista))
        return 0;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux!=NULL){
        cont++;
        pAux = pAux->pProx;
    }
    printf("\nNumero de carros %d\n", cont);
    return 0;
}