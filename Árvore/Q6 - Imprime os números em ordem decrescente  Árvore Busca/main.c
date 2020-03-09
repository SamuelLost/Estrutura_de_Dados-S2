#include<stdio.h>
#include<stdlib.h>
#include "arvoreb.h"

/*PREZADO(A) ALUNO(A) NÃO EDITAR ESSE ARQUIVO.*/
int main (){
    int n, i,k;
    ArvB* a = arvb_cria_vazia();
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        a = arvb_insere(a,k);
    }
    arvb_imprime_decrescente(a);
    arvb_libera(a);
}