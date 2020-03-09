#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criar(){
   Pilha *p = (Pilha*) malloc(sizeof(Pilha));
   p->topo = -1;
   return(p);
}

int cheia(Pilha *p){
   if(p->topo == N-1) return 1;
   else return(0);
}

void inserir(Pilha *p, int valor){
   if(p->topo == N-1) printf("\nA pilha está cheia\n");
   else{
      p->topo = p->topo+1;
      p->v[p->topo] = valor;
   }
}

int vazia(Pilha *p){
  if(p->topo ==-1) return 1;
  else return 0;
}

int remover(Pilha *p){
   int valor;
   if(vazia(p)){ printf("\nA pilha está vazia, não é possivel fazer remoção\n");
    exit(1);
   }
   valor = p-> v[p->topo];
   p->topo = p->topo-1;
   return(valor); 
}

void imprimir(Pilha *p){
  printf("\nO elemento  do topo da pilha é %d\n",p->v[p->topo]);
}

void liberar(Pilha *p){
  free(p);
}
