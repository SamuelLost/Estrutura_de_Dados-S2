#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"
int main() {
    setlocale(LC_ALL, "portuguese");
    Fila *f;
    int n=0, valor=0, removido=0, pos;
    do {
        printf("\nMenu da fila. Selecione uma opção:\n");
        printf("1 - Criar Fila\n");
        printf("2 - Inserção\n");
        printf("3 - Remover\n");
        printf("4 - Imprimir\n");
        printf("5 - Furar Fila\n");
        printf("6 - Verificar se está vazia\n");
        printf("7 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &n);

        switch (n){
            case 1:
                f = criar();
                printf("\nA fila foi criada\n");
                break;
            case 2:
                printf("\nDigite o valor a ser inserido e a posição: ");
                scanf("%d", &valor);
                inserir(f,valor);
                break;
            case 3:
                removido = remover(f);
                printf("\nValor removido: %d\n", removido);
                break;
            case 4:
                imprimir(f);
                printf("\n");
                break;
            case 5:
                printf("\nDigite o valor a ser inserido e a posição: ");
                scanf("%d", &valor);
                scanf("%d", &pos);
                fura_fila(f,valor,pos);
                break;
            case 6:
                if(vazia(f)) {
                    printf("\nA pilha está vazia\n");
                }
                break;
            default:
                printf("\nProgama encerrado\n");
                liberar(f);
                break;
            }
        }while(n!=7);
    
    return 0;    
}
