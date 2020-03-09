#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pilhaMENU.h"
int main() {
    setlocale(LC_ALL, "portuguese");
    Pilha *p;
    int n=0, valor=0, removido=0;
    do {
        printf("\nMenu da pilha. Selecione uma opção:\n");
        printf("1 - Criar Pilha\n");
        printf("2 - Inserção\n");
        printf("3 - Remover\n");
        printf("4 - Imprimir topo\n");
        printf("5 - Verificar se está cheia\n");
        printf("6 - Verificar se está vazia\n");
        printf("7 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &n);

        switch (n){
            case 1:
                p = criar();
                printf("\nA pilha foi criada\n");
                break;
            case 2:
                printf("\nDigite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserir(p,valor);
                break;
            case 3:
                removido = remover(p);
                printf("\nValor removido: %d\n", removido);
                break;
            case 4:
                imprimir(p);
                printf("\n");
                break;
            case 5:
                if(cheia(p)){
                    printf("\nA pilha está cheia\n");
                }
                else {
                    printf("\nA pilha não está cheia\n");
                }
                break;
            case 6:
                if(vazia(p)) {
                    printf("\nA pilha está vazia\n");
                }
                break;
	    case 7:
		free(p)
		printf("\nProgama encerrado\n");
		exit(1);
            default:
                printf("\nProgama encerrado\n");
                liberar(p);
                break;
            }
        }while(n!=7);
    
    return 0;    
}
