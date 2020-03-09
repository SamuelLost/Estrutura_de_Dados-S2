#include <stdio.h>
#include <locale.h>

struct nascimento{
	int mes;
	int ano;
};
typedef struct gado{
	
	int codigo;
	int leite;
	int alim;
	struct nascimento nasc;
	char abate;

} Gado;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	Gado g[3];
	int i, maior = 0, x = 0;
	
	for(i = 0; i < 3; i++){
		
		printf("Digite o código do bovino: ");
		scanf("%d", &g[i].codigo);
		printf("Digite a quantidade de leite produzida pela vaca: ");
		scanf("%d", &g[i].leite);
		printf("Digite a quantidade de alimento consumida pela vaca (em Kg): ");
		scanf("%d", &g[i].alim);
		printf("Digite o mês e ano de nascimento do bovino: ");
		scanf("%d", &g[i].nasc.mes);
		scanf("%d", &g[i].nasc.ano);
		printf("Será abatido? S para sim ou N para não: ");
                getchar();
		scanf("%c", &g[i].abate);
	}
	
	for(i = 0; i < 3; i++){
		if(g[i].leite > maior){
			maior = g[i].leite;
			x = i;
		}
	}
	
	printf("\nCódigo: %d\n", g[x].codigo);
	printf("Quantidade de leite: %d\n", g[x].leite);
	printf("Quantidade de alimento: %d\n", g[x].alim);
	printf("Data de nascimento: %02d/%02d\n", g[x].nasc.mes, g[x].nasc.ano);
	printf("Abate: %c\n", g[x].abate);
	
	return 0;
}