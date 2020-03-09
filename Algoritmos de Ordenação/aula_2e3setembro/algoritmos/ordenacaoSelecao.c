#include <stdio.h>

void ordenacao_selecao(int *v, int n){
   int i, j, pos_min, min;
   //seleção testa na parte desordenada.
   for(i=0;i<n;i++){ // percorro todos os elementos do vetor, ordenando a posição i
      pos_min = i;
      for(j=i+1; j<n;j++){ // percorro os elementos a direita de i encontrando o menor valor
         if(v[j] < v[pos_min]) pos_min = j;           
      }
      // trocando elementos do vetor
      min = v[pos_min];
      v[pos_min] = v[i];
      v[i] = min;    
   }    
}

int main(){
   int n;
   //printf("Digite o tamanho do vetor: ");
   //scanf("%d", &n);
   //int v[4];
   //printf("Preencha o vetor: ");
   /*for(int i=0; i<n; i++) {
      scanf("%d", &v[i]);
   }*/
   int v[4] = {60, 70, 61, 75};
   ordenacao_selecao(v, 4);
   int i =0;
   printf("[ ");
   for(i=0; i<4;i++) printf("%d ", v[i]);
   printf("]\n");
  
   return(0);
}















