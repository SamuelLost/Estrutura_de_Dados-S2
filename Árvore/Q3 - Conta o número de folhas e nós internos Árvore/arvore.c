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
void arv_imprime_ordem_simetrica(Arv *a);

/*Função que imprime os elementos de uma Árvore Binária na pós-ordem.*/
void arv_imprime_pos_ordem(Arv *a);

/*Função que conta o número de folhas de uma árvore.*/
int arv_conta_folhas(Arv *a){
    int cont_folhas=0;
    if(arv_vazia(a)) return 0;
    else{
        if(a->esq==NULL || a->dir==NULL){
            cont_folhas++;
        }
        cont_folhas += arv_conta_folhas(a->esq);
        cont_folhas += arv_conta_folhas(a->dir);
    }
    return cont_folhas;
}
/*Função que conta o número de nós internos de uma árvore.*/
int arv_conta_nos_internos(Arv *a){
    int countd=0, counte=0;
    if(arv_vazia(a)) return 0;
    else{
        if(a->esq!=NULL || a->dir!=NULL){
            counte+=arv_conta_nos_internos(a->esq);
            countd+=arv_conta_nos_internos(a->dir);
            return counte + countd + 1;
        }
    }
}















