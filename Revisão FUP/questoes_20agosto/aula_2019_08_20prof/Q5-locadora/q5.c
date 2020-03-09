#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct carro{
    char marca[20];
    char modelo[15];
    float valor_diaria;
    int qtd_portas;
}Carro;

void inicializa_carro(Carro *c){
    printf("Digite os valores para o carro (Marca, modelo, valor da diária e quantidade de portas");
    scanf(" %[^\n]", c->marca);
    scanf(" %[^\n]", c->modelo);
    scanf("%f", &(c->valor_diaria));
    scanf("%d", &(c->qtd_portas));
}

Carro* retorna_menor_diaria(Carro *c1, Carro *c2, Carro *c3){
    Carro *carro_menor_diaria;
    if(c1->valor_diaria < c2->valor_diaria && c1->valor_diaria < c3->valor_diaria)
        carro_menor_diaria = c1;
    else if(c2->valor_diaria < c1->valor_diaria && c2->valor_diaria < c3->valor_diaria)
        carro_menor_diaria = c2;
        else carro_menor_diaria = c3;
    
    return(carro_menor_diaria);
}

int main(){
    Carro *c1 = (Carro*) malloc(sizeof(Carro));
    Carro *c2 = (Carro*) malloc(sizeof(Carro));
    Carro *c3 = (Carro*) malloc(sizeof(Carro));
    
    
    inicializa_carro(c1);
    inicializa_carro(c2);
    inicializa_carro(c3);
    
    Carro *menor = retorna_menor_diaria(c1, c2, c3);
    
    printf("Imprimindo os dados do carro com menor diária: marca=%s, modelo=%s, Valor diária=%f, quantidade de portas=%d", menor->marca, menor->modelo, menor->valor_diaria, menor->qtd_portas);
    
    free(c1);
    free(c2);
    free(c3);
    return(0);
}
