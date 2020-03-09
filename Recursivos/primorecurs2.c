#include <stdio.h>

int primo(int n, int d) {
    if(d>1) {
        if(n%d!=0) {
            return 0 + primo(n,d-1);
        }
        else {
            return 1 + primo(n, d-1);
        }
    }
    else {
        return 1;
    }
}
int main() {
    int n=0, resultado=0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(primo(n,n)==2) {
        printf("O numero digitado eh primo\n");
    }
    else {
        printf("O numero digitado nao eh primo\n");
    }

    return 0;
}