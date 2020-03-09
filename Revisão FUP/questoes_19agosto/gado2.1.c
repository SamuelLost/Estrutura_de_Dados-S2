#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
typedef struct {
    float leite;
    float alim;
    char abate[3];
} Gado;
void leitura(Gado *a, Gado *b, Gado *c);
void qntd_Leite(Gado *a, Gado *b, Gado *c);

int main() {
    setlocale(LC_ALL, "portuguese");

    Gado *a = (Gado*) malloc(sizeof(Gado));
    Gado *b = (Gado*) malloc(sizeof(Gado));
    Gado *c = (Gado*) malloc(sizeof(Gado));

    leitura(a, b, c);
    qntd_Leite(a, b, c);

    free(a);
    free(b);
    free(c);
}
void leitura(Gado *a, Gado *b, Gado *c) {
    printf("Digite a quantidade de leite(L) produzida pelo gado A: ");
    scanf("%f", &a->leite);
    printf("Digite a quantidade de alimento(Kg) ingerido pelo gado A: ");
    scanf("%f", &a->alim);
    printf("O gado A será abatido ? ");
    scanf(" %[^\n]", a->abate);

    printf("Digite a quantidade de leite(L) produzida pelo gado B: ");
    scanf(" %f", &b->leite);
    printf("Digite a quantidade de alimento(Kg) ingerido pelo gado B: ");
    scanf("%f", &b->alim);
    printf("O gado B será abatido ? ");
    scanf(" %[^\n]", b->abate);

    printf("Digite a quantidade de leite(L) produzida pelo gado C: ");
    scanf(" %f", &c->leite);
    printf("Digite a quantidade de alimento(Kg) ingerido pelo gado C: ");
    scanf("%f", &c->alim);
    printf("O gado C será abatido ? ");
    scanf(" %[^\n]", c->abate);
}

void qntd_Leite(Gado *a, Gado *b, Gado *c) {
    if(a->leite > b->leite && a->leite > c->leite) {
        printf("\nA cabeça de gado A produz mais leite:\n");
        printf("Quantida de leite(L) produzida: %.2f\n", a->leite);
        printf("Quantidade de alimento(Kg) ingerido: %.2f\n", a->alim);
        printf("Abate: %s\n", a->abate);
    }
    else if(b->leite > a->leite && b->leite > c->leite) {
        printf("\nA cabeça de gado B produz mais leite:\n");
        printf("Quantida de leite(L) produzida: %.2f\n", b->leite);
        printf("Quantidade de alimento(Kg) ingerido: %.2f\n", b->alim);
        printf("Abate: %s\n", b->abate);
    }
    else {
        printf("\nA cabeça de gado C produz mais leite:\n");
        printf("Quantida de leite(L) produzida: %.2f\n", c->leite);
        printf("Quantidade de alimento(Kg) ingerido: %.2f\n", c->alim);
        printf("Abate: %s\n", c->abate);
    }
}