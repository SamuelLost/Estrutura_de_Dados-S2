#include <stdio.h>
int SOMA(int v[], int pos) {
    if(pos==0) {
        return v[pos];
    }
    else {
        return v[pos] + SOMA(v,pos-1);
    }
}
int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    printf("Preencha o vetor: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    printf("O soma dos elementos do vetor eh: %d\n", SOMA(v, n-1));

    return 0;
}