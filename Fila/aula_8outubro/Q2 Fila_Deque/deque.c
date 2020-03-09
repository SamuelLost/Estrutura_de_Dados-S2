#include "fila.h"
#include <locale.h>
int remover_final(Fila *a) {
    Fila *aux = criar();
    int valor1=0, valor2=0;
    for(int j=a->fim; j>0; j--){
        valor1 = remover(a);
        inserir(aux,valor1);
    }
    valor2 = remover(a);
    while(aux->fim>=0) {
        valor2 = remover(aux);
        inserir(a,valor2);
    }
    return valor2;
}
void inserir_inicio(Fila *b, int valor){
    Fila *aux = criar();
    if(b->fim>=0) {
        while(b->fim>=0){
            inserir(aux,remover(b));
        }
    }
    inserir(b,valor);
    while(aux->fim>=0){
        inserir(b,remover(aux));
    }
    
}
void imprimir_final(Fila *a){
    printf("\nO valor final é %d", a->v[a->fim]);
}
int main() {
setlocale(LC_ALL, "portuguese");
    Fila *f;
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
        printf("7 - Destruir filas\n");
        printf("8 - Encerrar\n");
        printf("Opção: ");
        scanf("%d", &n);

        switch (n){
            case 1:
                f = criar();
                printf("\nA pilha foi criada\n");
                break;
            case 2:
                printf("\nInserir no começo ou final? \n1-Início    2-Final\nOpção: ");
                scanf("%d", &decisao1);
                printf("\nDigite o valor a ser inserido: ");
                scanf("%d", &valor);
                if(decisao1 == 1) {
                    inserir_inicio(f,valor);
                }
                else if(decisao1 == 2){                
                    inserir(f,valor);
                }
                break;
            case 3:
                printf("\nRemover do final ou do início? \n1-Início    2-Final\nOpção: ");
                scanf("%d", &decisao2);
                if(decisao2==1) {
                    removido = remover(f);
                    printf("\nValor removido: %d\n", removido);
                    break;
                }
                else if(decisao2==2){
                    removido = remover_final(f);
                    printf("\nValor removido: %d\n", removido);    
                    break;
                }
                
                break;
            case 4:
                printf("\nImprimir início ou final? \n1-Início    2-Final\nOpção: ");
                scanf("%d", &decisao3);
                if(decisao3==1) {
                    imprimir(f);
                }
                else if(decisao3==2) {
                    imprimir_final(f);
                }
                printf("\n");
                break;
            case 5:
                if(cheia(f)){
                    printf("\nA fila está cheia\n");
                }
                else {
                    printf("\nA fila não está cheia\n");
                }
                break;
            case 6:
                if(vazia(f)){
                    printf("\nA fila está vazia\n");
                }
                else {
                    printf("\nA fila não está vazia\n");
                }
    
                break;
            case 7:
                liberar(f);
                printf("\nFila destruídas\n");
                break;
            case 8:
                printf("\nProgama encerrado\n");
                liberar(f);
                break;
            default:
                printf("\nOpção Inválida\n");
                liberar(f);
                break;
            }
    }while(n!=8);
    
    return 0;
}