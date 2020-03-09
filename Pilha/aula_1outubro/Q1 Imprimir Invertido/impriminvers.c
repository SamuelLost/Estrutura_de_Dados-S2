#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    //int digitos = 0;
    int numero = 0;
    Pilha *p = criar();
    Pilha *aux = criar();
    //printf("Digite a quantidade de dígitos: ");
    //scanf("%d",&digitos);
    printf("Digite o número: ");
    scanf("%d",&numero);
    //Empilhando os digitos na pilha
    while(numero>=10){
        inserir(p,numero%10);
        numero = numero/10;
    }
    if(numero>0) inserir(p,numero);
    //Invertendo a pilha
    for(int i = p->topo; i >=0;i-- )
        inserir(aux,remover(p));

    //Imprimindo a pilha invertida
    printf("Número invertido: ");
    for(int i = aux->topo; i >= 0;i--){
        printf("%d",remover(aux));
    }
    printf("\n");
    liberar(p);
    liberar(aux);

}