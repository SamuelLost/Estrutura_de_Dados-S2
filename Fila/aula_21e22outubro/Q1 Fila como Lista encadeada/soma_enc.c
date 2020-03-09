#include "fila.h"
#include <stdio.h>
int main(){
    Fila *f= criar(f);
    int x, op, a;
    do{
      scanf("%d",&op);
      switch (op){
        case 1:
            scanf("%d",&x);
            inserir(f,x);
            break;
        case 2:
            imprimir(f);
            printf("\n");
            //imprimir_tudo(p);
            break;
        case 3:
            scanf("%d",&a);
            remover_ocorrencia(f,a);
            break;
        case 4:
            printf("%d",somatorio(f));
            printf("\n");
            break;
        default:
            liberar(f);
            break;
      }  
    } while (op!=0);
    liberar(f);
    return 0;
}
void selection_sort(int v[], int n){
    int i, k, pos_min, min;
    for(i=0;i<n;i++){
        i = pos_min;
        for(k=i+1;k<n;k++){
            if(v[k]<v[pos_min]) k=pos_min;
        }
        min = v[pos_min];
        v[pos_min]=v[i];
        v[i]=min;
    }   
}