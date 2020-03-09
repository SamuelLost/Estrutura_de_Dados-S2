#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
struct lista{
   int valor;
   Lista *prox;   
};
struct fila{
   Lista *ini;
   Lista *fim;
};

Fila* criar(){
   Fila *f = (Fila*) malloc(sizeof(Fila));
   f->ini = NULL;
   f->fim = NULL;
   
   return f;
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
void imprimir(Fila *f){
   Lista *lAux = f->ini;
   printf("\n");
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

int somatorio(Fila *f){
   Lista *aux = f->ini;
   int soma=0;
   while(aux!=NULL){
      soma += aux->valor;
      aux = aux->prox;
   }
   return soma;
}

Fila* remover_ocorrencia(Fila *f, int x){
   //if(f==NULL) return NULL;
   if(f!=NULL){
      if(f->ini->valor==x && f->fim->valor==x){
         liberar(f);
         return NULL;
      }
      else{
         Lista *aux=f->ini;
         Lista *ant=f->ini;
         //Lista *l;
         while(aux!=NULL){
            if(aux->valor == x){
               if(f->ini==aux){
                  f->ini=f->ini->prox;
                  free(aux);
                  break;
               }
               if(f->fim==aux){
                  f->fim=ant;
                  ant->prox=aux->prox;
                  free(aux);
                  break;
               }
               ant->prox=aux->prox;
               free(aux);
               break;
            }
            ant = aux;
            aux=aux->prox;
         }
         return f;
      }
   }
}