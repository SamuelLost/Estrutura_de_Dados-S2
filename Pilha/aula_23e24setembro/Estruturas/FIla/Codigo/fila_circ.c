//#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define N 10

struct fila{
   int v[N];
   int qtd_elem;
   int ini, fim;
};

Fila* criar(){
   Fila *f = (Fila*) malloc(sizeof(Fila));
   f->qtd_elem = 0;
   f->ini = -1; f->fim = -1;
    return(f);
}

void inserir(Fila *f, int valor){
   if(cheia(f)) printf("A fila est� cheia");
   else{
   	  if(vazia(f)) {(f-> ini=0); (f-> fim=0); } // se a fila est� vazia, inicio tamb�m deve ser alterado
   	  else (f-> fim)++; // se a fila n�o est� vazia, apenas o fim deve ser incrementado
   	  
   	  if(f->fim == N) f->fim = 0; // Caso o valor de fim tenha passado da ultima posi��o do vetor, ele deve retornar a posi��o 0
   	  
      f->v[f->fim] = valor;
      f->qtd_elem += 1;	
   }
}

int cheia(Fila *f){
    if(f->qtd_elem ==N) return 1;
    else return 0;
}

int vazia(Fila *f){
  if(f->qtd_elem ==0) return 1;
  else return 0;
}

int remover(Fila *f){
   int i, valor;
   // verificando se a fila est� vazia
   if(vazia(f)){ printf("A fila est� vazia, n�o � possivel fazer remo��o");
    exit(1);
   }
   // salvando o valor do inicio da fila na vari�vel valor
   valor = f-> v[f->ini];
   // reduzindo o tamanho da fila passando o inicio para frente e reduzindo a quantidade de elementos
   (f->ini)++; (f->qtd_elem) -= 1;
   if(f->ini == N) f->ini = 0; // Caso o valor de fim tenha passado da ultima posi��o do vetor, ele deve retornar a posi��o 0
    if(vazia(f)) f->ini =-1; f->fim =-1;
   return(valor); 
}

void imprimir(Fila *f){
    if(!vazia(f))
        printf("\nO elemento  do inicio da Fila � %d", f->v[f->ini]);
}

void liberar(Fila *f){
  free(f);
}
