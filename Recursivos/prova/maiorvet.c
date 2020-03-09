#include <stdio.h>
int maior_elem(int v[], int pos) {
    int maior=0;
    if(pos==0) return v[pos];
    else {
        maior=maior_elem(v,pos-1);
        if(maior>v[pos]) return maior;
        else return v[pos];
    }
}
int main() {
    int tam;
    scanf("%d", &tam);
    int v[tam];
    for(int i=0; i<tam; i++) {
        scanf("%d", &v[i]);
    }
    printf("%d", maior_elem(v,tam-1));
}