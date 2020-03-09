#include <stdio.h>
#include <locale.h>
long double fatorial(long double x);
int main() {
    setlocale(LC_ALL, "portuguese");
    long double n, result=0;
    printf("Digite um número inteiro: ");
    scanf("%Lf", &n);
    result = fatorial(n);
    printf("O fatorial de %.0Lf é: %.0Lf\n", n, result);
}
long double fatorial(long double x) {
    long double result = 0;
    if(x==0) {
        result = 1;
    }
    else {
        result = x * fatorial(x-1);
    }
    return result;
}
