#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no{
	int valor;
	struct no *prox;
}No;

struct fila{
   No *ini, *fim;
   int qtd_elem;
};

Fila* criar(){
   Fila *f = (Fila*) malloc(sizeof(struct fila));
   f->ini = NULL;
   f->fim = NULL;
   f->qtd_elem=0;
   return f;
}


void inserir(Fila *f, int valor){
   if(f->qtd_elem == 0){
      f->ini = (No*) malloc(sizeof(struct no));
      f->fim = f->ini;
      f->ini->valor = valor;
      f->ini->prox = NULL;
   }else{
	   No *n= (No*) malloc(sizeof(struct no));
	   n->valor = valor;
      n->prox = NULL;
      f-> fim -> prox = n;
	
   }
   f->qtd_elem++;
	
}

int remover(Fila *f);

int vazia(Fila *f);

int cheia(Fila *f);

void imprimir(Fila *f);

void liberar(Fila *f);

