#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 20
typedef struct pilha{
   char v[N];
   char topo;
}Pilha;

Pilha* criar();

void inserir(Pilha *p, int valor);

int remover(Pilha *p);

int vazia(Pilha *p);

int cheia(Pilha *p);

void imprimir(Pilha *p);

void liberar(Pilha *p);
