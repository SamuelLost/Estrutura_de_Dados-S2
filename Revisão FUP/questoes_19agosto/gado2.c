#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float leite;
    float alim;
    char abate;
}Gado;

int main(){
    
    Gado *g1 = (Gado*) malloc(sizeof(Gado));
    Gado *g2 = (Gado*) malloc(sizeof(Gado));
    Gado *g3 = (Gado*) malloc(sizeof(Gado));
    
    
    printf("Digite a quantidade de leite(L) produzido na semana:\n");
    scanf("%f",&g1->leite);
    printf("Digite a quantidade de alimento ingerido\n");
    scanf("%f",&g1->alim);
    printf("Abate: ");
    scanf(" %c",&g1->abate);

    printf("Digite a quantidade de leite(L) produzido na semana:\n");
    scanf("%f",&g2->leite);
    printf("Digite a quantidade de alimento ingerido\n");
    scanf("%f",&g2->alim);
    printf("Abate: ");
    scanf(" %c",&g2->abate);

    printf("Digite a quantidade de leite(L) produzido na semana:\n");
    scanf("%f",&g3->leite);
    printf("Digite a quantidade de alimento ingerido\n");
    scanf("%f",&g3->alim);
    printf("Abate: ");
    scanf(" %c",&g3->abate);
    

    //Assumindo que possuem quantidades de leite diferente
    if(g1->leite > g2->leite && g2->leite > g3->leite ){
        printf("===POSSUI A MAIOR QTD DE LEITE 1==\n");
        printf("Qtd(leite):%.1f\n",g1->leite);
        printf("Qtd(alim): %.1f\n",g1->alim);
        printf("Abate: %c\n",g1->abate);
        printf("=================================\n");
    } else if(g2->leite > g1->leite && g1->leite > g3->leite ){
        printf("===POSSUI A MAIOR QTD DE LEITE 2==\n");
        printf("Qtd(leite):%.1f\n",g2->leite);
        printf("Qtd(alim): %.1f\n",g2->alim);
        printf("Abate: %c\n",g2->abate);
        printf("=================================\n");
    }else if(g3->leite > g1->leite && g1->leite > g2->leite ){
        printf("===POSSUI A MAIOR QTD DE LEITE 3==\n");
        printf("Qtd(leite):%.1f\n",g3->leite);
        printf("Qtd(alim): %.1f\n",g3->alim);
        printf("Abate: %c\n",g3->abate);
        printf("=================================\n");
    }

    free(g1);
    free(g2);
    free(g3);
        
}