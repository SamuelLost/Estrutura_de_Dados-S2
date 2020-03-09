#include <stdio.h>
#include <locale.h>
void recur_selecao(int v[], int ini, int end);
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
    recur_selecao(v,0,n);
    printf("A ordenação por seleção: [ ");
    for(int i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}
void recur_selecao(int v[], int ini, int end) {
    int pos_min, j, min;
    if(ini < end) { //substitui o for regido por i, como se fosse i<n
        pos_min = ini;
        for(j=ini+1; j<end;j++){ 
            if(v[j]< v[pos_min]) pos_min = j;           
        }
        min = v[pos_min];
        v[pos_min] = v[ini];
        v[ini] = min;
        recur_selecao(v,ini+1,end); //o ini+1 funciona com o incremento do for substituido pelo if.
    }
}