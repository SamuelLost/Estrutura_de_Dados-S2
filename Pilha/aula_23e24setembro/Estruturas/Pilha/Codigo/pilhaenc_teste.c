#include "pilha.h"
#include <stdio.h>
int main(){
    Pilha *p= criar(p);
    int x, op;
    do{
      scanf("%d",&op);
      switch (op){
        case 1:
            scanf("%d",&x);
            inserir(p,x);
            break;
        case 2:
            imprimir(p);
            printf("\n");
            imprimir_tudo(p);
            break;
        case 3:
            printf("%d", somatorio(p));
            break;  
        default:
            break;
      }  
    } while (op!=0);
    
}