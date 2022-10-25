#include "TAD_Pilha.h"

int main(){
    TAD_Carro carro1, carro_aux;
    TPilha pilha;
    
    FZPVazia(&pilha);

    printf("inserir 3\n");

    carro1.ano = 2004;
    strcpy(carro1.marca, "Nissan1");
    strcpy(carro1.modelo, "modelo12");
    Empilha(&pilha, &carro1);

    carro1.ano = 2004;
    strcpy(carro1.marca, "Nissan2");
    strcpy(carro1.modelo, "modelo13");
    Empilha(&pilha, &carro1);
    carro1.ano = 2004;

    strcpy(carro1.marca, "Nissan3");
    strcpy(carro1.modelo, "modelo1");
    Empilha(&pilha, &carro1);
    
    printf("Tamanho %d\n",  Tamanho(&pilha));
    printf("remove do topo\n");
    Desempilha(&pilha, &carro_aux);
    printf("Tamanho %d\n",  Tamanho(&pilha));

    return 0;
}