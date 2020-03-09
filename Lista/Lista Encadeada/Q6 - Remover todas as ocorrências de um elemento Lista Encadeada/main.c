#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

/*PREZADO(A) ALUNO(A) NÃO EDITAR ESSE ARQUIVO.*/
int main (){
    int n, k, rem;
    int i;
    Lista* lAux = lst_cria();
    /*NOTE QUE SE A ENTRADA TIVER (n=3) 
     E AS ENTRADAS NA LISTA (2, 4, 6 e 2). A LISTA GERADA SERÁ 2, 6, 4 e 2.*/
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&k);
        lAux = lst_insere(lAux, k);
    }
    scanf("%d",&rem);
    // A remoção de ocorrências de 2 da lista será 2,6, 4 e 2
    lAux = lst_remove_todos(lAux,rem);
    /*Portanto, a impressão terá como resposta:
        Info = 6
        Info = 4
    */
    lst_imprime(lAux);
    lst_libera(lAux);
}