#include "cabeca_gado.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Cabeca_de_gado *g1 = (Cabeca_de_gado*) malloc(sizeof(Cabeca_de_gado));
    Cabeca_de_gado *g2 = (Cabeca_de_gado*) malloc(sizeof(Cabeca_de_gado));
    Cabeca_de_gado *g3 = (Cabeca_de_gado*) malloc(sizeof(Cabeca_de_gado));
    
    printf("Digite os dados da cabeça de gado 1: Código, qtd leite, qtd alimento, data de nascimento (Mês e ano) e se está pronta para o abate (S, N)");
    scanf("%d%f%f%d%d", &g1->codigo, &g1->leite, &g1->alim, &g1->nasc.mes,&g1->nasc.ano);
    scanf(" %c", &g1->abate);
    
    printf("Digite os dados da cabeça de gado 2: Código, qtd leite, qtd alimento, data de nascimento (Mês e ano) e se está pronta para o abate (S, N)");
    scanf("%d%f%f%d%d", &g2->codigo, &g2->leite, &g2->alim, &g2->nasc.mes,&g2->nasc.ano);
    scanf(" %c", &g2->abate);
    
    printf("Digite os dados da cabeça de gado 3: Código, qtd leite, qtd alimento, data de nascimento (Mês e ano) e se está pronta para o abate (S, N)");
    scanf("%d%f%f%d%d", &g3->codigo, &g3->leite, &g3->alim, &g3->nasc.mes,&g3->nasc.ano);
    scanf(" %c", &g2->abate);
    
    if(g1->leite >= g2->leite && g1->leite >= g3->leite){
        printf("Cabeça de gado 1 produz mais leite. Imprimindo os dados da cabeça de gado 1: código:%d, Qtd leite: %f, qtd alimento: %f, Mes nascimento:%d, Ano nascimento: %d, Pronta para o abate: %c", g1->codigo, g1->leite, g1->alim, g1->nasc.mes, g1->nasc.ano,g1->abate);
    }else if(g2->leite >= g1->leite && g2->leite >= g3->leite){
        printf("Cabeça de gado 2 produz mais leite. Imprimindo os dados da cabeça de gado 2: código:%d, Qtd leite: %f, qtd alimento: %f, Mes nascimento:%d, Ano nascimento: %d, Pronta para o abate: %c", g2->codigo, g2->leite, g2->alim, g2->nasc.mes, g2->nasc.ano,g2->abate);
    }else{
        printf("Cabeça de gado 3 produz mais leite. Imprimindo os dados da cabeça de gado 3: código:%d, Qtd leite: %f, qtd alimento: %f, Mes nascimento:%d, Ano nascimento: %d, Pronta para o abate: %c", g3->codigo, g3->leite, g3->alim, g3->nasc.mes, g3->nasc.ano,g3->abate);
    }
    
    free(g1);
    free(g2);
    free(g3);
        
    return(0);
}
