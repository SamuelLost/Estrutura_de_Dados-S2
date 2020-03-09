#include <locale.h>
#include <stdio.h>
#include "fila.h"
int main() {
    Fila *geral;
    Fila *priori;
    geral=criar();
    priori=criar();
    int qtd_priori=1,qtd_geral=0, rm_geral, rm_priori;
    int op;
    do{
        printf("\nEscolha uma opção:\n1 - Nova Senha Geral\n2 - Nova Senha Prioritária\n3 - Chamar Próximo\n4 - Sair\nOpção: ");
        scanf("%d", &op);
        switch (op){
        case 1:
            if(geral->fim == -1) {
                inserir(geral,1);
                printf("\nSenha geral gerada: G1\n");
            }
            else {
                inserir(geral,geral->fim+2);
                printf("\nSenha geral gerada: G%d\n", geral->fim+1);
            }
            break;
        case 2:
            if(priori->fim == -1) {
                inserir(priori,1);
                printf("\nSenha prioritária gerada: P1\n");
            }
            else {
                inserir(priori,priori->fim+2);
                printf("\nSenha prioritária gerada: P%d\n", priori->fim+1);
            }
            break;
        case 3: 
            //Se nao estiver vazia os prioritarios, chamar 3 e zerar o contador e chamar um geral. 
            //se priori estiver vazia chamar geral até ter um priori
            if(qtd_priori <= 3 && (!vazia(priori)) || vazia(geral)) {
                rm_priori = remover(priori);
                printf("\nPróxima senha: P%d\n",rm_priori);
                qtd_priori++;
                qtd_geral=0;
            }
            else if(qtd_geral < 1 && (!vazia(geral))) {    
                rm_geral = remover(geral);
                printf("\nPróxima senha: G%d\n",rm_geral);
                qtd_geral++;
                qtd_priori = 1;            
            }
            qtd_geral=0;
            break;
        case 4:
            liberar(geral);
            liberar(priori);
            printf("\nPrograma Encerrado!\n");
            break;
        default:
            printf("\nOpção Inválida!\n");
            break;
        }
    } while (op!=4);
    return 0;
}
