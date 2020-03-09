#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#define N 20
struct pilha{
   int v[N];
   int topo;
};
int inversa(Pilha *p, Pilha *q) {
    int flag;
    Pilha *aux = (Pilha*) malloc(sizeof(Pilha));
    aux = criar(aux);
    if(p->topo == q->topo) {
        for(int j=p->topo; j>=0; j--) {
            inserir(aux,remover(p));
        }
        for(int i=q->topo; i>=0; i--) {
            if(remover(q) != remover(aux)) {
                flag = 0;
                break;                
            }
            else {
                flag = 1;
            }
        }
    }
    else {
        flag = 0;
    }
    return flag;
}
int main() {
    Pilha *p, *q;
    p = criar(p);
    q = criar(q);
    int n, valor1, valor2, flag;
    do
    {
        printf("\nEscolha uma opção:\n");
        printf("1 - Preencher a pilha 1\n");
        printf("2 - Preencher a pilha 2\n");
        printf("3 - Comparar as duas pilhas\n");
        printf("4 - Encerra o programa\n");
        printf("Opção: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor1);
            inserir(p,valor1);
            break;
        case 2:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor2);
            inserir(q,valor2);
            break;
        case 3:
            flag = inversa(p,q);
            if(flag==1) {
                printf("\nSão iguais!\n");
            }
            else {
                printf("\nSão diferentes!\n");
            }
            break;
        default:
            printf("\nPrograma encerrado\n");
            liberar(p);
            liberar(q);
            break;
        }
    } while (n!=4);
    

}