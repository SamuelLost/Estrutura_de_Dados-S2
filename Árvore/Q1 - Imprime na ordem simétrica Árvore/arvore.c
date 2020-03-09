#include<stdio.h>
#include<stdlib.h>
#include "arvore.h" 

struct arv{
    char info;
    Arv *esq;
    Arv *dir;
};

Arv* arv_cria_vazia(void){
  return NULL;
}

int arv_vazia(Arv *a){
  return a==NULL;
}

Arv* arv_cria_no(char c, Arv *sae, Arv *sad){
  Arv* a = (Arv*)malloc(sizeof(Arv));
  a->info = c;
  a->esq = sae;
  a->dir = sad;
  return a;
}

void arv_imprime(Arv *a){
   if(!arv_vazia(a)){
     printf("%c ",a->info);
     arv_imprime(a->esq);
     arv_imprime(a->dir);
   }
}

int arv_pertence(Arv *a,char c){
  if(arv_vazia(a))
    return 0;
  else
 	return a->info ==c || arv_pertence(a->esq,c)
 					  || arv_pertence(a->dir,c);

}

void arv_libera(Arv *a){
  if(!arv_vazia(a)){
    arv_libera(a->esq);
    arv_libera(a->dir);
    free(a);
  }
}

/*Função que imprime os elementos de uma Árvore Binária na ordem simétrica.*/
void arv_imprime_ordem_simetrica(Arv *a){
    if(!arv_vazia(a)){
     arv_imprime_ordem_simetrica(a->esq);
     printf("%c ",a->info);
     arv_imprime_ordem_simetrica(a->dir);
   }
}
/*Função que imprime os elementos de uma Árvore Binária na pós-ordem.*/
void arv_imprime_pos_ordem(Arv *a);