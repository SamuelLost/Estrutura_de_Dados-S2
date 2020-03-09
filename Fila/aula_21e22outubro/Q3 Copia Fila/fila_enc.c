#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criar(){
   Fila *f = (Fila*) malloc(sizeof(Fila));
   f->ini = NULL;
   f->fim = NULL;
   
   return f;
}

Fila* fila_copia(Fila *f) {
   Fila *copia = (Fila*) malloc(sizeof(Fila));
   while(f->ini!=NULL) {
      inserir(copia,remover(f));
   }
   return copia;
}

void inserir(Fila *f, int valor){
   Lista *l = (Lista*)malloc(sizeof(Lista));
   if(l==NULL){
      printf("Memoria insuficiente!!!\n");
      exit(1);
   }
   l->valor = valor;
   l->prox = NULL;
   if(!vazia(f))
   	f->fim->prox = l;	
   else
   	f->ini = l;
   f->fim = l;
}

int remover(Fila *f){
   Lista *l;  int a;
   if(vazia(f)){
      printf("Fila Vazia!!!\n");
      exit(1);
   }
   a = f->ini->valor;
   l = f->ini;
   f->ini = f->ini->prox;
   free(l);
   if(vazia(f))
   	f->fim = NULL;
   return a;
}

int vazia(Fila *f){
   return f->ini==NULL;
}

//int cheia(Fila *f);

void imprimir(Fila *f){
   Lista *lAux = f->ini;
   //printf("\n");
   while(lAux!=NULL){
      printf("%d ",lAux->valor);
      lAux = lAux->prox;
   }
}

void liberar(Fila *f){
   Lista* l = f->ini;
   Lista* lAux;
   while(l!=NULL){
      lAux = l->prox;
      free(l);
      l = lAux;
   }
   free(f);
}
