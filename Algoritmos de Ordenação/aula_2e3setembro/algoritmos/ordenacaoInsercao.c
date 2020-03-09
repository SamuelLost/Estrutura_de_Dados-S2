#include <stdio.h>

void ordenacao_insercao(int *v, int n){
    int i, j, temp;
    //inserção testa na parte ordenada.
    for(i=1;i<n;i++){ // percorro todos os elementos do vetor, ordenando a posição i
        j=i-1;
        temp = v[i];
        // mover os elementos até encontrar a posição de inserção do elemento atual (i)
        while(j>=0 && v[j] > temp){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = temp;
    }    
}

int main(){
   int v[4] = {1000, 100, 20, 2};
   ordenacao_insercao(v, 4);
   int i =0;
   for(i=0; i<4;i++) printf("Elemento %d do vetor %d\n", i, v[i]);
  
  
   return(0);
}















