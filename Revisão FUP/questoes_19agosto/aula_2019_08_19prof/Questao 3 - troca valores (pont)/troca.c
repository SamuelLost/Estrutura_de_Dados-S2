#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q){
    int *aux = (int*) malloc(sizeof(int));
    *aux = *p;
    *p = *q;
    *q = *aux;
    
    free(aux);
}

int main(){
    int *num1 = (int*) malloc(sizeof(int));
    int *num2 = (int*) malloc(sizeof(int));
    
    printf("Digite os dois números");
    scanf("%d", num1);
    scanf("%d", num2);
    
    swap(num1, num2);
    
    printf("Imprimindo os valores após a troca: Num1= %d, Num2= %d", *num1, *num2);
    
    free(num1);
    free(num2);
    return(0);
}
