#include "TAD_Carro.h"

// gcc Lista_de_carros\main_ListaCarros.c Lista_de_carros\TAD_carro.c Lista_de_carros\TAD_Lista.c -o e

typedef struct Celula* PointCell;
typedef struct Celula{
    TAD_Carro Carro;
    struct Celula* pProx;
}TCelula;

typedef struct{
    PointCell pPrimeiro;
    PointCell pUltimo;
}TLista;

int IniciaLista(TLista *pLista);
int VerificaLV(TLista *pLista);
int InsereFinal(TLista *pLista, TAD_Carro *carro);
int ImprimeLista(TLista *pLista);
int RemovePrimeiroCarro(TLista *pLista);
int Contador(TLista *pLista);
int RemoveCarroDado(TLista *pLista, char *carro);