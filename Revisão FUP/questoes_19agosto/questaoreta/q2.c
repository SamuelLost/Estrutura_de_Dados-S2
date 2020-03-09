#include "reta.h"
#include <locale.h>

float calcula_tamanho(Reta r);
int main() {
    setlocale(LC_ALL, "portuguese");
    Pontos a, b;
    Reta r;
    printf("Digite o Pa(Xa,Ya): ");
    scanf("%d %d", &r.a.x, &r.a.y);

    printf("Digite o Pb(Xb,Yb): ");
    scanf("%d %d", &r.b.x, &r.b.y);
    float d=0;
    d = calcula_tamanho(r);
    printf("O tamanho da reta é: %.2f\n", d);

    return 0;
}