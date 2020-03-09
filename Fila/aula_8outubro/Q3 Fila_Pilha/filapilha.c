#include <stdio.h>
#include "pilha.h"
#include <locale.h>
void transfere(Pilha *p1, Pilha *p2){
    for(int i = p1->topo; i>=0; i--)
        inserir(p2,remover(p1));
}
int main() {
setlocale(LC_ALL, "portuguese");
    Pilha *f;
    Pilha *a;
    int n=0, valor=0, removido=0;
    int decisao1, decisao2, decisao3;
    do {
        printf("\nMenu da pilha. Selecione uma opção:\n");
        printf("1 - Criar fila\n");
        printf("2 - Inserção\n");
        printf("3 - Remoção\n");
        printf("4 - Imprimir\n");
        printf("5 - Verificar se está cheia\n");
        printf("6 - Verificar se está vazia\n");
        printf("7 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &n);

        switch (n){
            case 1:
                f = criar();
                a = criar();
                printf("\nA pilha foi criada\n");
                break;
            case 2:
            if(vazia(a)){
                printf("Digite o valor a ser inserido na pilha: ");
                scanf("%d", &valor);
                inserir(f, valor);
            }
            else{
                transfere(a,f);
                printf("\nDigite a opção novamente: ");
            }
                break;
            case 3:
                transfere(f,a);
  	            removido = remover(a);
	            printf("\nO valor removido: %d\n", removido);                
                break;
            case 4:
                transfere(f,a);
		        imprimir(a);
                printf("\n");
                break;
            case 5:
                if(cheia(a)){
                    printf("\nA fila está cheia\n");
                }
                else {
                    printf("\nA fila não está cheia\n");
                }
                break;
            case 6:
                if(vazia(a)==1){
                    printf("\nA fila está vazia\n");
                }
                else if(vazia(a)==0){
                    printf("\nA fila não está vazia\n");
                }
    
                break;
            case 7:
                liberar(f);
                liberar(a);
                printf("\nPrograma encerrado!\n");
                break;
            default:
                printf("\nOpção Inválida\n");
                liberar(f);
                liberar(a);
                break;
            }
    }while(n!=7);
    
    return 0;
}