#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    char marca[50];
    char modelo[50];
    float valor_diario;
    int porta;
} Carro;

void LerCarros(Carro *a, Carro *b, Carro *c);
void ValorDiario(Carro *a, Carro *b, Carro *c);


int main() {
    setlocale(LC_ALL,"portuguese");

    Carro *a = (Carro *) malloc(sizeof(Carro)); 
    Carro *b = (Carro *) malloc(sizeof(Carro)); 
    Carro *c = (Carro *) malloc(sizeof(Carro)); 
    
    LerCarros(a, b, c);
    ValorDiario(a, b, c);

    free(a);
    free(b);
    free(c);

    return 0;
}
void LerCarros(Carro *a, Carro *b, Carro *c) {
    printf("Digite a marca do carro 1: ");
    scanf("%[^\n]", (*a).marca);
    printf("Digite o modelo do carro 1: ");
    scanf(" %[^\n]", (*a).modelo);
    printf("Digite o valor diário do carro 1: ");
    scanf("%f", &(*a).valor_diario);
    printf("Digite a quantidade de portas do carro 1: ");
    scanf("%d", &(*a).porta);

    printf("Digite a marca do carro 2: ");
    scanf(" %[^\n]", (*b).marca);
    printf("Digite o modelo do carro 2: ");
    scanf(" %[^\n]", (*b).modelo);
    printf("Digite o valor diário do carro 2: ");
    scanf("%f", &(*b).valor_diario);
    printf("Digite a quantidade de portas do carro 2: ");
    scanf("%d", &(*b).porta);

    printf("Digite a marca do carro 3: ");
    scanf(" %[^\n]", (*c).marca);
    printf("Digite o modelo do carro 3: ");
    scanf(" %[^\n]", (*c).modelo);
    printf("Digite o valor diário do carro 3: ");
    scanf("%f", &(*c).valor_diario);
    printf("Digite a quantidade de portas do carro 3: ");
    scanf("%d", &(*c).porta);
}

void ValorDiario(Carro *a, Carro *b, Carro *c) {
    if(((*a).valor_diario < (*b).valor_diario) && ((*a).valor_diario < (*c).valor_diario)) {
        printf("\n");
        printf("O carro com menor diária é: \n");
        printf("Marca: %s", (*a).marca);
        printf("Modelo: %s", (*a).modelo);
        printf("Quantidade de portas: %d", (*a).porta);
        printf("Valor da diária: %.2f", (*a).valor_diario);
    }
    else if(((*b).valor_diario < (*a).valor_diario) && ((*b).valor_diario < (*c).valor_diario)) {
        printf("\n");
        printf("O carro com menor diária é: \n");
        printf("Marca: %s\n", (*b).marca);
        printf("Modelo: %s\n", (*b).modelo);
        printf("Quantidade de portas: %d\n", (*b).porta);
        printf("Valor da diária: %.2f\n", (*b).valor_diario);
    }
    else {
        printf("\n");
        printf("O carro com menor diária é: \n");
        printf("Marca: %s\n", (*c).marca);
        printf("Modelo: %s\n", (*c).modelo);
        printf("Quantidade de portas: %d\n", (*c).porta);
        printf("Valor da diária: %.2f\n", (*c).valor_diario);
    }
}