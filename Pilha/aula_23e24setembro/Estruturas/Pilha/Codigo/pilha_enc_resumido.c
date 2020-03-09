#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
typedef struct no{
	int valor;
	struct no *prox;
}No;
struct pilha{
   No *topo;
};
Pilha* criar(){
   Pilha *p = (Pilha*) malloc(sizeof(struct pilha));
   p->topo = NULL;
   return p;
}
void inserir(Pilha *p, int valor){
   if(p->topo == NULL){
      p->topo = (No*) malloc(sizeof(struct no));
      p->topo->valor = valor;
      p->topo->prox = NULL;
   }else{
	   No *n= (No*) malloc(sizeof(struct no));
	   n->valor = valor;
      n->prox = p->topo;
      p->topo =  n;	
   }
}
int vazia(Pilha *p){
   if(p->topo == NULL) return 1;
   else return 0; 
}
int remover(Pilha *p){
   if(!vazia(p)){
      int valor=p->topo->valor;
      No *temp = p->topo;
      p->topo = p->topo->prox;
      free(temp);
      return(valor);
   }else{
     printf("A pilha está vazia");
     exit(1);
   }
}
int cheia(Pilha *p){
   return 0;
}
void imprimir(Pilha *p){
   printf("%d", p->topo->valor);
}
void liberar(Pilha *p){
  free(p);
}
void imprimir_tudo(Pilha *p){
   if(!(vazia(p))){
      No *aux = p->topo;
      //printf("%d",p->topo->valor);
      while (aux!=NULL){
         printf("%d",aux->valor);
         aux = aux->prox;
      }
      
   }
}
int somatorio(Pilha *p){
   int soma=0;
   
   if(!vazia(p)){
      No *aux = p->topo->prox;
      soma = p->topo->valor;
      while(aux!=NULL){
         soma += aux->valor;
         aux = aux->prox;
      }
   }
   return soma;
}