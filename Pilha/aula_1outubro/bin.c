#include <stdio.h>
int main() {
    int n=0;
    int dec, bin, vb[n];
    printf("Digite um número em decimal: ");
    scanf("%d", &dec);
    int i=0;
    printf("Número %d em decimal: ", dec);
    while (dec>0){
        bin = dec%2;
        dec=dec/2;
        n++;
        vb[i]=bin;
        i++;
    }
    for(int j=n-1; j>=0; j--) {
        printf("%d", vb[j]);
    }
    printf("\n");
    return 0;
}