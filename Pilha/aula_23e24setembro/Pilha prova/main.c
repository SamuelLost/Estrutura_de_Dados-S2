#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int reverso(int n){
    Pilha *p = criar();
    Pilha *inv = criar();
    int a=0;
    while(n>0){
        inserir(p, n%10);
        n /= 10;
    }
    while(!vazia(p)){
        inserir(inv,remover(p));
    }
    while(!vazia(inv)){
        a = a*10 + remover(inv);
    }
    liberar(p);
    liberar(inv);
    return a;
}
int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    scanf("%d", &n);
    printf("Número invertido: %d\n", reverso(n));
    return 0;
}