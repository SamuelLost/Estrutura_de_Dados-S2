#include "reta.h"
#include <stdio.h>

int main(){
    Reta r;
    
    printf("Digite os dados do ponto P1(x, y) da reta.");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    
    printf("Digite os dados do ponto P2(x, y) da reta.");
    scanf("%d %d", &r.p2.x, &r.p2.y);
    
    r.tamanho = calcula_tamanho(r);
    
    printf("A dimensão da reta é %f", r.tamanho);
    
    return(0);
}
