#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define N 20
struct pilha{
   int v[N];
   int topo;
};
int jogador(Pilha *p, Pilha *q, int rand) { 
    Pilha *aux1=criar();
    Pilha *aux2=criar();
    for(int j=p->topo; j>=0; j--) { //Inverte a pilha p
        inserir(aux1,remover(p));
    }
    for(int k=q->topo; k>=0; k--) { //Inverte a pilha q
        inserir(aux2,remover(q));
    }
    for(int i=aux1->topo; i>=0; i--) {
        if(remover(aux1) == rand) { //Faz a comparação do chute do jogador 1
            return 0;
            break;                
        }
        else if(remover(aux2) == rand){ //Faz a comparação do chute do jogador 2
            return 1;
            break;
        }
    }
    liberar(aux1);
    liberar(aux2);
    return 2;
}
int main() {
    setlocale(LC_ALL, "portuguese");
    Pilha *p, *q;
    p = criar(p);
    q = criar(q);
    int n, valor1, valor2, flag, x;
    srand(time(NULL)); //Para não ficar pegando o mesmo número sempre
    x = rand() % 10 + 1; //Sortear de 1 a 10;
    for(int i=0; i<5; i++) {
        printf("Chute do jogador 1: ");
        scanf("%d", &valor1);
        inserir(p,valor1);
        printf("Chute do jogador 2: ");
        scanf("%d", &valor2);
        inserir(q,valor2);
    }
    flag = jogador(p,q,x);
    if(flag==0) {
        printf("Jogador 1 ganhou!\n");
    }
    else if(flag==1) {
        printf("Jogador 2 ganhou!\n");
    }
    else {
        printf("Ninguém Ganhou!\n");
    }
    printf("Número gerado: %d\n", x);
    liberar(p);
    liberar(q);
    return 0;
}        