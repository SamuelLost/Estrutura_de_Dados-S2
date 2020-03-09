#include <stdio.h>
#include <locale.h>
#include "fila.h"

int main() {
    Fila *f;
    Fila *copia;
    int op,removido,valor;
    do {
        printf("\nMenu da fila. Selecione uma opção:\n");
        printf("1 - Criar Fila\n");
        printf("2 - Inserção\n");
        printf("3 - Remover\n");
        printf("4 - Imprimir\n");
        printf("5 - Fazer cópia\n");
        printf("6 - Imprimir fila copiada\n");
        printf("7 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &op);

        switch (op){
            case 1:
                f = criar();
                printf("\nA fila foi criada\n");
                break;
            case 2:
                printf("\nDigite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserir(f,valor);
                break;
            case 3:
                removido = remover(f);
                printf("\nValor removido: %d\n", removido);
                break;
            case 4:
                printf("\nElementos da fila original: ");
                imprimir(f);
                printf("\n");
                break;
            case 5:
                copia = fila_copia(f);
                printf("\nCópia feita com sucesso!\n");
                break;
            case 6:
                printf("\nElementos da fila copiada: ");
                imprimir(copia);
                printf("\n");
                break;
            default:
                printf("\nProgama encerrado\n");
                liberar(f);
                break;
            }
        }while(op!=7);
    
    return 0;    
    
}