#include<stdio.h>
#include<stdlib.h>
#include "time.h"

typedef struct times{
    char nome[21]; // nome
    int v; // Vitórias
    int sg; // Saldo de Gols
}Time;

/*Função que cria um Time com um nome, número de vitórias e saldo de gols.*/
Time* time_cria(){
    Time* t = (Time*)malloc(sizeof(Time));
    scanf(" %21[^\n]",t->nome);
    scanf("%d",&t->v);
    scanf("%d",&t->sg);
    return t;
}

/*Função que retorna o nome de um time.*/
char* time_nome(Time *t){
    if(t!=NULL)
        return t->nome;
    else
        return NULL;
}

void time_imprime(Time *t){
    if(t!=NULL)
        printf("\n%s - Vitórias %d, Saldo de Gols %d",t->nome, t->v, t->sg);
}

/*Função que atualiza as vitórias e o saldo de gols de um time*/
void time_atualiza(Time *t, int vitorias, int saldo_gols){
    if(t!=NULL){
        t->v = vitorias;
        t->sg = saldo_gols;
    }
}