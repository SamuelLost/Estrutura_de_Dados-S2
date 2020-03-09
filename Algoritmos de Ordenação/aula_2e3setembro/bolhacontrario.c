#include <stdio.h>
#include <locale.h>
void bolha_invertido(int v[], int n);
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
    bolha_invertido(v,n);
    return 0;
}
void bolha_invertido(int v[], int n){
    int i, j, temp;
    for(i=0;i<n;i++){ 
       for(j=n-1;j>i;j--){
            if(v[j] < v[j-1]){ 
                temp = v[j];
                v[j] = v[j-1];
                v[j-1] = temp;
           }
       }
    }
    printf("Ordenado pelo bolha invertido: [");
    for(int i=0; i<n; i++) {
        printf(" %d", v[i]);
    }
    printf(" ]\n");    
}