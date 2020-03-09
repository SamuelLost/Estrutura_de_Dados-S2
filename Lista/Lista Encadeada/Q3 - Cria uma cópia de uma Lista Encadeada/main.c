#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

/*PREZADO(A) ALUNO(A) NÃO EDITAR ESSE ARQUIVO.*/
int main (){
    int n, k;
    int i;
    Lista* lAux = lst_cria();
    Lista* lNew;
    //NOTE QUE SE A ENTRADA TIVER (n=3) E AS ENTRADAS NA LISTA (2, 4 e 6). A LISTA GERADA SERÁ 6, 4 e 2.
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&k);
        lAux = lst_insere(lAux, k);
    }
    //A FUNÇÃO COPIA DEVERÁ GERAR A LISTA 6, 4 e 2.
    lNew = lst_copia(lAux);
    lst_libera(lAux);
    /*PORTANTO, A IMPRESSÃO SERÁ:
        Info = 6 
        Info = 4
        Info = 2
    */
    lst_imprime(lNew);
    lst_libera(lNew);
}