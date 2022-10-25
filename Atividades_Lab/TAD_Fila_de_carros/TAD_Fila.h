#include "TAD_Carros.h"

typedef struct Celula* Apontador;
typedef struct Celula{
    TAD_Carro Carro;
    struct Celula* pProx;
}TCelula;

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
}TFila;

void FFVAzia(TFila* fila);
int FEnfilera(TFila* fila, TAD_Carro* carro);
int FDesenfilera(TFila* fila, TAD_Carro* carro);
int FEhVazia(TFila* fila);
