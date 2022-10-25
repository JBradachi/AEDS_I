#include "TAD_Fila.h"

int main(){
    TFila fila1;
    TAD_Carro carro1, carAux;

    printf("Enfilera...\n");
    carro1.ano = 2004;
    strcpy(carro1.marca, "Nissan1");
    strcpy(carro1.modelo, "modelo12");
    FEnfilera(&fila1, &carro1);

    carro1.ano = 2004;
    strcpy(carro1.marca, "Nissan2");
    strcpy(carro1.modelo, "modelo13");
    FEnfilera(&fila1, &carro1);

    carro1.ano = 2004;
    strcpy(carro1.marca, "Nissan3");
    strcpy(carro1.modelo, "modelo1");
    FEnfilera(&fila1, &carro1);

    printf("Desenfilera...\n");
    FDesenfilera(&fila1, &carAux);
    printf("Tudo certo\n");
    
}