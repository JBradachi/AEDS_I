#include "TAD_Lista.h"

int main(){
    TAD_Carro carro1;
    TLista lista;
    
    IniciaLista(&lista);

    printf("inserir 3\n");

    carro1.ano = 2004;
    strcpy(carro1.marca, "Nissan1");
    strcpy(carro1.modelo, "modelo12");
    InsereFinal(&lista, &carro1);

    carro1.ano = 2004;
    strcpy(carro1.marca, "Nissan2");
    strcpy(carro1.modelo, "modelo13");
    InsereFinal(&lista, &carro1);
    carro1.ano = 2004;

    strcpy(carro1.marca, "Nissan3");
    strcpy(carro1.modelo, "modelo1");
    InsereFinal(&lista, &carro1);
    ImprimeLista(&lista);
    
    Contador(&lista);
    printf("remove primeiro");
    RemovePrimeiroCarro(&lista);
    Contador(&lista);
    ImprimeLista(&lista);


    printf("Remove dado\n");
    RemoveCarroDado(&lista, "modelo1");
    Contador(&lista);
    ImprimeLista(&lista);
}