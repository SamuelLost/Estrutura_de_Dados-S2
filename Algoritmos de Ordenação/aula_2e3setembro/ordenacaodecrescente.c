#include <stdio.h>
#include <locale.h>
void insercao_descre(int *v, int n);
void selecao_descre(int *v, int n);

int main() {
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    printf("Preencha o vetor: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    insercao_descre(v,n);
    selecao_descre(v,n);
    return 0;
}
void insercao_descre(int *v, int n){
    int i, j, temp;
    for(i=1;i<n;i++){ 
        j=i-1;
        temp = v[i];
        while(j>=0 && v[j] < temp){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = temp;
       
    }
    printf("Vetor descrescente por inserção: [ ");
    for(int i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");    
}
void selecao_descre(int *v, int n){
    int i, j, pos_min, min;
   
    for(i=0;i<n;i++){ 
       pos_min = i;
        for(j=i+1; j<n;j++){ 
            if(v[j] > v[pos_min]){
                pos_min = j;
            }            
        }     
      min = v[pos_min];
      v[pos_min] = v[i];
      v[i] = min;    
    }
    printf("Vetor descrescente por seleção: [ ");
    for(int i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");     
}
