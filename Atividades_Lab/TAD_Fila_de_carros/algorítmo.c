#include <stdio.h>
#include <stdlib.h>

int moda(int* vetor, int tam);

int  main(){
    int n = 4;
    int v[4] = {1, 3, 2, 3};
    printf("Moda = %d", moda(v, n));
    return 0;
}

int moda(int* vetor, int tam){
    int vAux[tam], i, j;
    int quant_moda = 0;
    int valor_moda = 0;
    for(i=0; i<tam;i++){
        vAux[i] = 0;
    }
    for(i=0; i<tam;i++){
        for(j=0; j<tam;j++){
            if(vetor[i] == vetor[j])
                vAux[i]++;
        }
    }
    for(i=0; i<tam;i++){
        if(vAux[i] > quant_moda){
            quant_moda = vAux[i];
            valor_moda = vetor[i];
        }
    }
    return valor_moda;
}
