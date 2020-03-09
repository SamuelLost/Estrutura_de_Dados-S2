#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "time.h"

typedef struct hash{
   int n;// tamanho
   int ocupacao;
   Time **v;
}Hash;

/*Função que cria uma tabela hash com um dado tamanho.*/
Hash* hash_cria(int tamanho){
   int i;
   Hash* h = (Hash*)malloc(sizeof(Hash)); 
   h->n = tamanho;
   h->ocupacao = 0;
   h->v = (Time**)malloc(tamanho*sizeof(Time*));
   for(i=0;i<tamanho;i++){
      h->v[i] = NULL;
   }
   return h;
}
/*Retorna o código hash de um dado time.*/
int hash_hash(Hash *h, char *nome){
    int total =0;
    for(int i=0; nome[i]!='\0';i++){
        total += nome[i];
    }
    return total % h->n;
}

/*Retorna o funcionário que possui um dado nome.*/
Time* hash_busca(Hash *h, char* nome){
    int hash = hash_hash(h,nome);
    while(h->v[hash]!=NULL){
        if(strcmp(time_nome(h->v[hash]),nome)==0)
            return h->v[hash];
        hash = (hash+1) % h->n;
   }
   return NULL;
}
    
/*Função que adiciona um elemento em uma tabela hash.*/
void hash_insere(Hash *h, Time *t){
    if(h->n==h->ocupacao){
      printf("\nTabela Hash CHEIA!!!");
      exit(1);
    }else{
        int hash = hash_hash(h,time_nome(t));
        while(h->v[hash]!=NULL){
            hash = (hash+1) % h->n;            
        }
        h->v[hash] = t;
        h->ocupacao++;
   }
}

/*Função que remove um elemento de uma tabela hash.*/
void hash_remove(Hash *h, Time *t){
    int hash = hash_hash(h,time_nome(t));
    while(h->v[hash]!=NULL){
        hash = (hash+1) % h->n;            
    }
    if(h->v[hash]==t){
        free(t);
        h->v[hash] = NULL;
        h->ocupacao--;
    }
}
/*Função que imprime os elementos de uma tabela hash.*/
void hash_imprime(Hash *h){
   for(int i=0;i<h->n;i++){
      if(h->v[i] != NULL){
        time_imprime(h->v[i]);   
      }
   }
}
/*Retorna a taxa de ocupação da tabela hash.*/
float hash_tx_ocupacao(Hash *h){
    return ((float)h->ocupacao) / h->n * 100; 
}

/*Libera o espaço alocado para uma tabela hash.*/
void hash_libera(Hash *h){
    for(int i=0;i<h->n;i++){
      if(h->v[i] != NULL){
        free(h->v[i]);   
      }
   }
   free(h);
}

/*Retorna o número de colisões da tabela hash.*/
int hash_num_colisoes(Hash *h){
    int cont=0;
    for(int i=0;i<h->n;i++){
        if(h->v[i]!=NULL)
           if(i!=hash_hash(h,time_nome(h->v[i])))
                cont++;
    }
    return cont;
}
