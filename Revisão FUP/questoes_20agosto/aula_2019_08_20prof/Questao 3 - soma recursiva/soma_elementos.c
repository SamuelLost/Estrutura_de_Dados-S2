#include <stdio.h>
 
int soma_elementos(int vet[], int pos){
   if(pos==0) return(vet[pos]);
   else{
       return(vet[pos] + soma_elementos(vet, pos-1));
   }    
}

int main(){
  int vet[10] = {1, 10, 3, 7, 33, 6, 18, 8, 9, 10};
  printf("\nA soma dos elementos do vetor é: %d ",soma_elementos(vet, 9));
  return(0);
}
