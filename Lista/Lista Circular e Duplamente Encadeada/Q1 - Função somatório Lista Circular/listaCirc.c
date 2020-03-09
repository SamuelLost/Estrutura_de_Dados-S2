#include<stdio.h>
#include<stdlib.h>
#include "listaCirc.h" 

struct lista_circ {
   int info;
   ListaCirc *prox;
};


/* Cria uma lista circular vazia.*/
ListaCirc* lst_circ_cria(){
   return NULL;
}

/* Testa se uma lista circular é vazia.*/
int lst_circ_vazia(ListaCirc *l){
   return (l==NULL);
}

/* Insere um elemento em uma lista circular.*/
ListaCirc* lst_circ_insere(ListaCirc *l, int info){
    ListaCirc* ln = (ListaCirc*)malloc(sizeof(ListaCirc));
    ln->info = info;
    if(l==NULL)
      ln->prox = ln;
    else{
      ln->prox = l->prox;
      l->prox = ln;
     }
   return ln;
}

/* Remove um elemento de uma lista circular.*/
ListaCirc* lst_circ_remove(ListaCirc *l, int info){

}

/* Busca um elemento em uma lista circular.*/
ListaCirc* lst_circ_busca(ListaCirc *l, int info){
}

/* Imprime uma lista circular.*/
void lst_circ_imprime(ListaCirc *l){
   if(l!=NULL){
      ListaCirc* lAux = l;
      printf("Lista de Elementos \n");
      do{
         printf("Info = %d\n",lAux->info);
         lAux = lAux->prox;
      }while(l!=lAux);
   }
}

/* Libera o espaço alocado por uma lista circular .*/
void lst_circ_libera(ListaCirc *l){
}
/* IMPLEMENTE A Função que retorna o somatório de uma lista circular.*/
int lst_circ_somatorio(ListaCirc *l){
   int soma=0;
   if(l!=NULL){
      ListaCirc* lAux = l;
      do{
         soma = soma + lAux->info;
         lAux = lAux->prox;
      }while(l!=lAux);
   }
   return soma;
}