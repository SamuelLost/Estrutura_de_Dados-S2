#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    int quartos;
    char cor[10];
    float area;
    int portas;
} Casa;

void lerCasa(Casa *a, Casa *b) {
    printf("Digite a quantidade de quartos da casa 1: ");
    scanf("%d", &(*a).quartos);
    getchar();
    printf("Digite a cor da casa 1: ");
    scanf("%[^\n]", (*a).cor);
    printf("Digite a área da casa 1: ");
    scanf("%f", &(*a).area);
    printf("Digite a quantidade de portas da casa 1: ");
    scanf("%d", &(*a).portas);

    printf("Digite a quantidade de quartos da casa 2: ");
    scanf("%d", &(*b).quartos);
    getchar();
    printf("Digite a cor da casa 2: ");
    scanf("%s", (*b).cor);
    printf("Digite a área da casa 2: ");
    scanf("%f", &(*b).area);
    printf("Digite a quantidade de portas da casa 2: ");
    scanf("%d", &(*b).portas);
}
void imprimir(Casa *a, Casa *b) {
    printf("\n");
    printf("Quantidade de quartos da casa 1: %d\n", (*a).quartos);
    printf("Cor da casa 1: %s\n", (*a).cor);
    printf("Área da casa 1: %.2f\n", (*a).area);
    printf("Quantidade de portas da casa 1: %d\n", (*a).portas);
    printf("\n");
    printf("Quantidade de quartos da casa 2: %d\n", (*b).quartos);
    printf("Cor da casa 2: %s\n", (*b).cor);
    printf("Área da casa 2: %.2f\n", (*b).area);
    printf("Quantidade de portas da casa 2: %d\n", (*b).portas);
}
int main() {
    setlocale(LC_ALL,"portuguese");

    Casa *a = (Casa*) malloc(sizeof(Casa));
    Casa *b = (Casa*) malloc(sizeof(Casa));
    
    lerCasa(a, b);
    imprimir(a, b);
    free(a);
    free(b);
    return 0;
}
