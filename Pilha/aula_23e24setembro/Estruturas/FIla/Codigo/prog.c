#include <stdio.h>
#include "fila.h"

int main(){
  int opc, opc2, valor;
  Fila *f_pares;
  Fila *f_impares;
  do{
	printf("Digite a opção desejada: \n 1- Criar Fila \n2- Inserir \n 3- Remover \n 4- Imprimir \n5- Verificar se a fila está vazia \n 6- sair");    
    	scanf("%d", &opc);
	
	switch(opc){
	  case 1:

	             f_pares = criar();
			f_impares = criar();
	 		
 	     break;
	  case 2:
 	    printf("Digite o valor a ser inserido na fila");
 		scanf("%d", &valor);
		if(valor %2 == 0){
	     		inserir(f_pares, valor);
			printf("Valor inserido na Fila de pares");
		}else{
  			inserir(f_impares, valor);
			printf("Valor inserido na Fila de impares");
		}
	     break;
	  case 3:
		printf("Digite a opção da Fila que deseja remover 1 - par outro valor impar");
		scanf("%d", &opc2);
		if(opc2 == 1)
	  	    valor = remover(f_pares);
		else
		valor = remover(f_impares);
	    printf("O valor removido foi %d", valor);
	   break;
	  case 4:
	printf("Digite a opção da Fila que deseja imprimir 1 - par outro valor impar");
		scanf("%d", &opc2);
		if(opc2 == 1) imprimir(f_pares);
		else imprimir(f_impares);
	        break;
	  case 5:
		printf("Digite a opção da Fila que deseja verificar se está vazia 1- par 2- impar");
		scanf("%d", &opc2);
		if(opc2 == 1){
  	 	  if(vazia(f_pares)) printf("A fila de pares está vazia");
  		  else printf("A fila de pares não está vazia");
		}else if(opc2 == 2){
              	 	  if(vazia(f_impares)) printf("A fila de impares está vazia");
            		  else printf("A fila de pares não está vazia");
   		      }


		break;
	  case 6:
        	liberar(f_pares);
		liberar(f_impares);
		printf("Programa encerrado com sucesso");
		break;
          default: printf("Opção Inválida");
	}
  }while(opc != 6);
  return(0);
}
