#include "pilha.h"
int main() {
    int decimal,binario;
    Pilha *a = criar();
    printf("Digite um um número em decimal: ");
    scanf("%d", &decimal);
    printf("O número decimal %d em binário é: ", decimal);
    while(decimal>0) {
        binario = decimal%2;
        inserir(a,binario);
        decimal = decimal/2;
    }
    for(int i=a->topo; i>=0; i--) {
        printf("%d", a->v[i]);
    }
    printf("\n");
    liberar(a);
    return 0;
}