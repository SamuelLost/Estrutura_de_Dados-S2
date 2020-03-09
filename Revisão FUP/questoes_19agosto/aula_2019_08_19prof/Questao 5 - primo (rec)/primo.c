#include <stdio.h>
 
int primo(int n, int d){
  if (n==2) return(1);
  if(n%d == 0) return(0);
  else {
    if(d == 2) return(1);
    else return 0 + primo(n,d-1);
  }
}

int main(){
  int n;
  printf("Digite um número para saber se é primo ou não");
  scanf("%d", &n);
  if(primo(n, n-1)) printf("É primo");
  else printf("Não é primo");
  return(0);
}
