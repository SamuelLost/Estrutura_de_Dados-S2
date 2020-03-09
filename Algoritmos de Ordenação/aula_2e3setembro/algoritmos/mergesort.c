#include <stdio.h>

void merge(int *v, int inicio, int meio, int fim) {
    int tam1 = meio - inicio + 1, tam2 = fim - meio;
    int A[tam1], B[tam2]; // definição dos vetores auxiliares
    int i, j, k;
    // preenchendo o vetor auxiliar 1
    for (i=0; i<tam1; i++) A[i] = v[i+inicio];
    // preenchendo o vetor auxiliar 2
    for (j=0; j<tam2; j++) B[j] = v[j+meio+1];
    i = j = 0;
    k = inicio;
    // preenchendo o vetor v com os valores dos vetores auxiliares A e B, até que um dos vetores auxiliares chegue ao fim.
    while (i<tam1 && j<tam2) {
        if (A[i] < B[j]) 
            v[k] = A[i++];
        else
            v[k] = B[j++];
        k++;
    }

    // Ao chegar aqui, pelo menos um vetor auxiliar foi totalmente percorrido e estes laços percorrem o restante dos elementos do outro vetor auxiliar
    while (i<tam1) v[k++] = A[i++];
    while (j<tam2) v[k++] = B[j++];
}

void mergesort(int *v, int inicio, int fim) {
     // Condição de parada é inicio = fim, ou seja, a divisão chegou em um vetor de tamanho 1.
    if (inicio < fim) { 
       int meio = (inicio+fim)/2;
       // chamadas para o sub-vetor da esquerda
       mergesort(v, inicio, meio);
       // chamadas para o sub-vetor da direita
       mergesort(v, meio+1, fim);
       // Chamada a intercalação entre os dois sub-vetores
       merge(v, inicio, meio, fim);
    }
}

int main() {
    int v[] = {36, 83, 81, 22, 96, 0, 9, 15, 42, 28, 97, 20, 17, 54, 21, 49, 75, 88, 76, 38, 23, 48, 78, 46, 47, 72, 57, 52, 12, 85, 91, 41, 65, 73, 59, 87, 64, 66, 34, 89, 19, 67, 61, 40, 69, 31, 44, 1, 11, 98, 43, 45, 62, 7, 86, 39, 3, 26, 6, 50, 5, 37, 74, 18, 82, 56, 16, 2, 27, 99, 68, 70, 33, 32, 35, 13, 58, 80, 53, 79, 24, 63, 93, 8, 25, 55, 84, 92, 71, 77, 10, 90, 94, 4, 60, 51, 95, 30, 14, 29};

   mergesort(v, 0,99);
   int k;
   for (k=0; k<100; k++)
        printf("%d ", v[k]);
   return 0;
}





