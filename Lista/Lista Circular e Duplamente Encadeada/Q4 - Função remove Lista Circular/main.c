#include<stdio.h>
#include<stdlib.h>
#include "listaCirc.h"

/*PREZADO(A) ALUNO(A) NÃO EDITAR ESSE ARQUIVO.*/
int main (){
    int n, k, r;
    int i;
    ListaCirc* lAux = lst_circ_cria();
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&k);
        lAux = lst_circ_insere(lAux, k);
    }
    scanf("%d",&r);
    lAux = lst_circ_remove(lAux, r);
    lst_circ_imprime(lAux);
    lst_circ_libera(lAux);
}