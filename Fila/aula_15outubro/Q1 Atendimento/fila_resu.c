#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
Fila* criar(){
   Fila *f = (Fila*) malloc(sizeof(Fila));
    f->fim = -1;
    return(f);
}

int cheia(Fila *f){
   if(f->fim == N-1) return 1;
   else return(0);
}

void inserir(Fila *f, int valor){
   if(cheia(f)) printf("A fila está cheia");
   else{
       f->fim = f->fim+1;
      f->v[f->fim] = valor;
   }
}

int vazia(Fila *f){
  if(f->fim == -1) return 1;
  else return 0;
}

int remover(Fila *f){
   int i, valor;
   if(vazia(f)){ printf("A fila está vazia, não é possivel fazer remoção");
      exit(1);
   }
   valor = f-> v[0];
   for(i=1;i<=f->fim; i++)
      f->v[i-1] = f->v[i];
   
   f->fim = f->fim-1;
    
   return(valor); 
}

void imprimir(Fila *f){
    
    if(!vazia(f))
        printf("\nO elemento  do inicio da Fila é %d", f->v[0]);
}

void liberar(Fila *f){
  free(f);
}
