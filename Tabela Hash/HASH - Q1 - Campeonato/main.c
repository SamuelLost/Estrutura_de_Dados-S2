#include<stdio.h>
#include<stdlib.h>
#include "time.h"
#include "hash.h"

/*PREZADO(A) ALUNO(A) NÃO EDITAR ESSE ARQUIVO.*/
int main (){
    Hash* h = hash_cria(7);
    Time* t;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        t = time_cria();
        hash_insere(h, t);
    }
    printf("TIMES:");
    hash_imprime(h);
    t = hash_busca(h,"Corinthians");
    time_atualiza(t, 10, 12);
    printf("\nMelhor do mundo:");
    time_imprime(t);
    printf("\nNúmero de colisões: %d",hash_num_colisoes(h));
    hash_libera(h);
}