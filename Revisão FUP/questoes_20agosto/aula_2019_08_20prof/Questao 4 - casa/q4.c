#include "casa.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Casa *c1 = (Casa*) malloc(sizeof(Casa));
    
    printf("Digite os dados da casa(area, qtd_quartos, qtd_portas, cor)");
    scanf("%f %d %d", &c1->area, &c1->qtd_quartos, &c1->qtd_portas);
    scanf(" %[^\n]", c1->cor);
    
    printf("Imprimindo os dados da casa: area: %f, Qtd_quartos: %d, Qtd_portas: %d, Cor: %s", c1->area, c1->qtd_quartos, c1->qtd_portas, c1->cor);
    
    return(0);
}
