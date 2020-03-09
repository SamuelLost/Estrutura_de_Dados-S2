#include <stdio.h>
 
int retorna_maior(int m[], int pos){
   if(pos==0) return(m[pos]);
   else{
      int valor = retorna_maior(m, pos-1);
       if(valor > m[pos]) return valor;
       else return m[pos];
   }    
}

int main(){
  int m[10] = {1, 10, 3, 7, 33, 6, 18, 8, 9, 10};
  printf("\nO maior valor do vetor é: %d ",retorna_maior(m, 9));
  return(0);
}
