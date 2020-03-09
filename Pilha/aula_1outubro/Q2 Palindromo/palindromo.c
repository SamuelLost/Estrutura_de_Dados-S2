#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "pilha.h"
int verificar(Pilha *p, Pilha *q);
int main() {
    setlocale(LC_ALL, "portuguese");
    Pilha *p = criar();
    Pilha *q = criar();
    char nome[80];
    printf("Digite um nome: ");
    scanf("%[^\n]", nome);
    int i=0;
    
    for(int i=0; nome[i]!='\0'; i++) { //Percorrer a string
        if((nome[i]>='A') && (nome[i]<='Z')) {
            nome[i] = nome[i] + 32; //Transformar em minúscula
        }
    }
    while(nome[i] != '\0') {
        inserir(p,nome[i]);
        inserir(q,nome[i]);
        i++;
    }
    if(verificar(p,q)==1) {
        printf("É um palíndromo!\n");
    }
    else {
        printf("Não é palíndromo!\n");
    }
    liberar(p);
    liberar(q);
    return 0;
}

int verificar(Pilha *p, Pilha *q) {
    Pilha *aux2 = criar();
    for(int i=p->topo; i>=0; i--) {
        inserir(aux2, remover(q)); //Inverte a Pilha q em aux2
    }
    printf("Pilha original: ");
    for(int i=p->topo; i>=0; i--) {
        printf("%c", p->v[i]);
    }
    printf("\nPilha invertida: ");
    for(int j=aux2->topo; j>=0; j--) {
        printf("%c", aux2->v[j]);
    }
    printf("\n");
    if(p->topo == aux2->topo) {
        for(int j=p->topo; j>=0; j--) {
            if(remover(p) != remover(aux2)) {
                return 0;
                break;
            }
            else {
                return 1;
            }
        }
    }
    else {
        return 0;
    }
    liberar(aux2);
    return 2;
}
