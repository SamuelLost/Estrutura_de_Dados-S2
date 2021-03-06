#include<stdio.h>
#include<stdlib.h>
#include "lista.h" 

struct lista {
   int info;
   Lista *prox;
};

/* Cria uma lista vazia.*/
Lista* lst_cria(){
   return NULL;
}

/* Testa se uma lista é vazia.*/
int lst_vazia(Lista *l){
   return (l==NULL);
}

/* Insere um elemento no início da lista.*/
Lista* lst_insere(Lista *l, int info){
   Lista* ln = (Lista*)malloc(sizeof(Lista));
   ln->info = info;
   ln->prox = l;
   return ln;
}

/* Remove um elemento de uma lista.*/
Lista* lst_remove(Lista *l, int info){
 if(l!=NULL){
   Lista* lAux = l->prox;
   if(l->info==info){
      free(l);
      return lAux;
   }else{
      Lista* lAnt = l;
      while(lAux!=NULL ){
         if(lAux->info == info){
            lAnt->prox = lAux->prox;
            free(lAux);
            break;
         }else{
            lAnt = lAux;
            lAux = lAux->prox;
         }
      }      
   }
 }
 return l;
}

/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info){
   Lista* lAux = l;
   while(lAux!=NULL){
      if(lAux->info == info)
         return lAux;
      lAux = lAux->prox;
   }
   return NULL;
}

/* Imprime uma lista.*/
void lst_imprime(Lista *l){
   Lista* lAux = l;
   while(lAux!=NULL){
      printf("Info = %d\n",lAux->info);
      lAux = lAux->prox;
   }
}

/* Libera o espaço alocado por uma lista.*/
void lst_libera(Lista *l){
   Lista* lProx;
   while(l!=NULL){
      lProx = l->prox;
      free(l);
      l = lProx;
   }
}
/* Insere um elemento ao final da lista.*/
Lista* lst_insere_final(Lista *l, int info){
    Lista *aux = l;
    Lista *lnew = (Lista*) malloc(sizeof(Lista));
    lnew->prox = NULL;
    lnew->info = info;
    if(aux==NULL) return lnew;
    while(aux->prox != NULL){ //Percorre até o final da lista
        aux = aux->prox;
    }
    aux->prox=lnew; //Aponta para o novo valor inserido 
    return l;
} 