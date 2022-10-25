#include "TAD_Carro.h"

int IniciaCarro(TAD_Carro *carro){
    printf("\nInforme o modelo do carro:\n>>>");
    scanf("%s", carro->modelo);
    printf("\nInforme a marca do carro\n>>>");
    scanf("%s", carro->marca);
    printf("\nInforme o ano do carro\n>>>");
    scanf("%d", &carro->ano);

    return 1;
}

void ImprimeCarro(TAD_Carro *carro){
    printf("\n===============\n");
    printf("Marca: %s\n", carro->marca);
    printf("Modelo: %s\n", carro->modelo);
    printf("Ano: %d\n", carro->ano);
    printf("===============\n");
}