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

/* Remove um elemento de uma lista circular. 
    Se o elemento não for encontrado, retorne o ponteiro para a própria lista. 
    Caso contrário, retorne o ponteiro anterior.*/
ListaCirc* lst_circ_remove(ListaCirc *l, int info){
}

/* Remove um elemento de uma lista circular. 
    Se o elemento não for encontrado, retorne o ponteiro para a própria lista. 
    Caso contrário, retorne o ponteiro anterior ao da última remoção.*/
ListaCirc* lst_circ_remove_todos(ListaCirc *l, int info){
   if(l!=NULL){
      ListaCirc* lAux = l;
		ListaCirc* lAnt = l;
		do{
			lAnt = lAux;
			lAux = lAux->prox;
			if(lAux->info == info){
				if(lAnt->prox == lAux->prox){
					free(l);
					return NULL;
				}
				lAnt->prox = lAux->prox;
				if(lAnt->prox == l){
					lAnt = lAnt->prox;
				}	
				free(lAux);
				lAnt = lst_circ_remove_todos(lAnt, info);
				return lAnt;
			}
		}while(l!=lAux);
		return l;
   }
   return NULL;
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
}