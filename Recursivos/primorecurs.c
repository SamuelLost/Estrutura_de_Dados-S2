#include <stdio.h>

int primo(int x, int a) {
    if(x==2) {
        return 1;
    }
    else if(x<=1) {
        return 0;
    }
    else if(x>2) {
        if(x%a==0 && x>a) {
            return 0;
        }
        else if(x%a!=0 && x>a) {
            return primo(x, a+1);
        }
    }
    return 1;
}
int main() {
    int x=0, resultado=0;
    printf("Digite um numero: ");
    scanf("%d", &x);

    if(primo(x,2)==1) {
        printf("O numero digitado eh primo\n");
    }
    else {
        printf("O numero digitado nao eh primo\n");
    }

    return 0;
}