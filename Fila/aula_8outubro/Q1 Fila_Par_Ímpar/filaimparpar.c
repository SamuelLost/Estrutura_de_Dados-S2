#include "fila.h"
#include <locale.h>
#include <string.h>
int main() {
    setlocale(LC_ALL, "portuguese");
    Fila *impar;
    Fila *par;
    int n=0, valor=0, removido=0;
    int decisao;
    do {
        printf("\nMenu da pilha. Selecione uma opção:\n");
        printf("1 - Criar Fila\n");
        printf("2 - Inserção\n");
        printf("3 - Remoção\n");
        printf("4 - Imprimir início\n");
        printf("5 - Verificar se está cheia\n");
        printf("6 - Verificar se está vazia\n");
        printf("7 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &n);

        switch (n){
            case 1:
                impar = criar();
                par = criar();
                printf("\nA pilha foi criada\n");
                break;
            case 2:
                printf("\nDigite o valor a ser inserido: ");
                scanf("%d", &valor);
                if(valor%2==0) {
                    inserir(par,valor);
                }
                else {                
                    inserir(impar,valor);
                }
                break;
            case 3:
                printf("Remover da fila ímpar ou par? \n1-Par\n2-Ímpar\nOpção: ");
                scanf("%d", &decisao);
                if(decisao==2) {
                    removido = remover(impar);
                }
                else if(decisao==1) {
                    removido = remover(par);
                }
                printf("\nValor removido: %d\n", removido);
                break;
            case 4:
                printf("Deseja imprimir qual fila? \n1-Par\n2-Ímpar\nOpção: ");
                scanf("%d", &decisao);
                if(decisao==2) {
                    imprimir(impar);
                }
                else if(decisao==1) {
                    imprimir(par);
                }
                printf("\n");
                break;
            case 5:
                if(cheia(par)){
                    printf("\nA fila par está cheia\n");
                }
                else {
                    printf("\nA fila par não está cheia\n");
                }
                if(cheia(impar)){
                    printf("\nA fila impar está cheia\n");
                }
                else {
                    printf("\nA fila impar não está cheia\n");
                }
                break;
            case 6:
                if(vazia(par)){
                    printf("\nA fila par está vazia\n");
                }
                else {
                    printf("\nA fila par não está vazia\n");
                }
                if(vazia(impar)){
                    printf("\nA fila impar está vazia\n");
                }
                else {
                    printf("\nA fila impar não está vazia\n");
                }
                break;
            default:
                printf("\nProgama encerrado\n");
                liberar(par);
                liberar(impar);
                break;
            }
        }while(n!=7);
    
    return 0;    
}