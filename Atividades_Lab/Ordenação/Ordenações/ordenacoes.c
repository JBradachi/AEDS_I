#include "ordenacoes.h"

void printa(int* v, int n){
    int a;
    for(a=0; a<n; a++){
        printf("%d ", v[a]);
    }
}

void BolhaMelhorado (int* v, int n ){
 int i, j, troca;
 int aux;

    for( i = 0 ; i < n-1 ; i++ ){
        troca = 0;
        for( j = 1 ; j < n-i ; j++ ){
            if ( v[j] < v[j-1] ){
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
            troca = 1;
            }
        }
        if (troca == 0)
        break;
    }
}

void Selecao (int* v, int n){ 
 int i, j, Min;
 int aux;
    for (i = 0; i < n - 1; i++){ 
        Min = i;
        for (j = i + 1 ; j < n; j++)
            if ( v[j] < v[Min]) 
        Min = j;
        aux = v[Min];
        v[Min] = v[i];
        v[i] = aux;
    }
}

void Insercao (int* v, int n ){
 int i,j;
 int aux;
 for (i = 1; i < n; i++){
    aux = v[i];
    j = i - 1;
    while ( ( j >= 0 ) && ( aux < v[j] ) ){
        v[j + 1] = v[j];
        j--;
    }
    v[j + 1] = aux;
 }
}

void Shellsort (int* A, int n){ 
 int i, j; 
 int h = 1;
 int aux;
 
 do h = h * 3 + 1; while (h < n);
 do{ 
    h = h/3;
    for( i = h ; i < n ; i++ ){
        aux = A[i]; j = i;
        while (A[j-h] > aux){
            A[j] = A[j - h]; j -= h;
            if (j < h) break;
        }
        A[j] = aux;
    }
 } while (h != 1);
}

void QuickSort(int *A, int n){ 
 QS_Ordena(0, n-1, A);
}

void QS_Ordena(int Esq, int Dir, int *A){ 
int i,j;
 QS_Particao(Esq, Dir, &i, &j, A);
 if (Esq < j) QS_Ordena(Esq, j, A);
 if (i < Dir) QS_Ordena(i, Dir, A);
}

void QS_Particao(int Esq, int Dir, int *i, int *j, int *A){ 
 int pivo, aux;
 *i = Esq;
 *j = Dir;
 pivo = A[(*i + *j)/2]; /* obtem o pivo x */
 do{ 
    while (pivo > A[*i]) (*i)++;
    while (pivo < A[*j]) (*j)--;
    if (*i <= *j){ 
        aux = A[*i];
        A[*i] = A[*j];
        A[*j] = aux;
        (*i)++;
        (*j)--;
    }
 } while (*i <= *j);
 }
