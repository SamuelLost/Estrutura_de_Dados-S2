#include<stdio.h>
#include<stdlib.h>
#include "arvoreb.h" 

struct arvb{
    int info;
    ArvB *esq;
    ArvB *dir;
};

ArvB* arvb_cria_vazia(void){
  return NULL;
}

int arvb_vazia(ArvB *a){
  return a==NULL;
}

ArvB* arvb_cria_no(int c, ArvB *sae, ArvB *sad){
  ArvB* a = (ArvB*)malloc(sizeof(ArvB));
  a->info = c;
  a->esq = sae;
  a->dir = sad;
  return a;
}

void arvb_imprime(ArvB *a){
   if(!arvb_vazia(a)){
     arvb_imprime(a->esq);
     printf("%d ",a->info);
     arvb_imprime(a->dir);
   }
}

/*Função que busca a sub-árvore que contém um inteiro.*/
ArvB* arvb_busca(ArvB *a, int c){
   if(arvb_vazia(a))
 	return NULL;
   else if(a->info < c)
 	return arvb_busca(a->dir,c);
   else if(a->info > c)
 	return arvb_busca(a->esq,c);
   else //(a->info == c)
 	return a;
}

ArvB* arvb_insere(ArvB *a, int c){
   if(arvb_vazia(a)){
     a = (ArvB*)malloc(sizeof(ArvB));
     a->info = c;
     a->esq = NULL; 
     a->dir = NULL;
   }else if(a->info > c)
     a->esq = arvb_insere(a->esq,c);   
    else if (a->info < c)
     a->dir = arvb_insere(a->dir,c);   
    else
     printf("\nElemento Ja Pertence a Arvore");
   return a;  
}

ArvB* arvb_remove(ArvB *a, int c){
 if(!arvb_vazia(a)){
    if(a->info > c)
     a->esq = arvb_remove(a->esq,c);   
    else if (a->info < c)
     a->dir = arvb_remove(a->dir,c);   
    else{
     ArvB* t; 
     if (a->esq == NULL){
       t = a;  
       a = a->dir;
       free(t);
     }else if (a->dir == NULL){
       t = a;  
       a = a->esq;
       free(t);
     }else{
      t = a->esq;
      while(t->dir!=NULL)
         t = t->dir;
      a->info = t->info;  t->info = c;
      a->esq = arvb_remove(a->esq,c);
     }
    }
 }  
 return a;  
}

void arvb_libera(ArvB *a){
  if(!arvb_vazia(a)){
    arvb_libera(a->esq);
    arvb_libera(a->dir);
    free(a);
  }
}

/*Função que imprime os elementos de uma Árvore em ordem descrescente .*/
void arvb_imprime_decrescente(ArvB *a){
}

/*Função que retorna o menor valor de uma Árvore. Caso a árvore seja vazia, retorne -1.*/
int arvb_menor(ArvB *a){
    if(arvb_vazia(a)) return -1;
    if(a->esq==NULL) return a->info;
    arvb_menor(a->esq);
}
/*Função que retorna o maior valor de uma Árvore. Caso a árvore seja vazia, retorne -1.*/
int arvb_maior(ArvB *a){
    if(arvb_vazia(a)) return -1;
    if(a->dir==NULL) return a->info;
    arvb_maior(a->dir);
}
