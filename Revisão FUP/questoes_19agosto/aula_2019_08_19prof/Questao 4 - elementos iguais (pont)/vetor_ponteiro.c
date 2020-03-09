#include <stdio.h>
#include <stdlib.h>

int fnc(int L[], int n, int Q[], int m){
    int *i = (int*) malloc(sizeof(int));
    int *j = (int*) malloc(sizeof(int));
    int *qtd_elem = (int*) malloc(sizeof(int));
    *qtd_elem = 0;
    for(*i=0;*i<n;(*i)++){
        for(*j=0;*j<m;(*j)++){
            if(L[*i] == Q[*j]) *qtd_elem = *qtd_elem + 1;
        }
    }
    free(i);
    free(j);
    return(*qtd_elem);
}

int main(){
    int *n = (int*) malloc(sizeof(int));
    int *m = (int*) malloc(sizeof(int));
    int *qtd_elem = (int*) malloc(sizeof(int));
    
    printf("Digite o tamanho dos vetores");
    scanf("%d", n);
    scanf("%d", m);
    
    int *vet1 = (int*) malloc((*n)*sizeof(int));
    int *vet2 = (int*) malloc((*m)*sizeof(int));
    int *i = (int*) malloc(sizeof(int));
        
    printf("Populando o vetor 1");
    for(*i=0;*i<*n;(*i)++){
        scanf("%d", vet1 + *i);
    }
    printf("Populando o vetor 2");
    for(*i=0;*i<*m;(*i)++){
        scanf("%d", vet2 + *i);
    }
    
    *qtd_elem = fnc(vet1, *n, vet2, *m);
    
    printf("A quantidade de elementos iguais nos vetores é %d", *qtd_elem);
    
    free(i);
    free(n);
    free(m);
    free(qtd_elem);
    free(vet1);
    free(vet2);
}
