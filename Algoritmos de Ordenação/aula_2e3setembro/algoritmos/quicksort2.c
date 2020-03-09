#include <stdio.h>
void quick_sort(int *v, int inicio, int fim){
	int meio=0;
	if(inicio<fim){
		meio = particiona(v, inicio, fim);
		//nas chamadas recursivas o meio não é coniderado, pois o pivo está no local certo
		if(inicio<meio-1) quick_sort(v,inicio, meio-1);
		if(meio+1<fim) quick_sort(v,meio+1, fim);		
	}
}

int particiona(int *v, int inicio, int fim){
        int pos_pivo = (inicio+fim)/2;
	int pivo= v[pos_pivo];
	int esq = inicio;
	int dir = fim;
	int temp=0;
	int meio;
	
	while(esq<dir){
		while (v[esq]< pivo && esq<=fim) esq=esq+1;
		while (v[dir] > pivo && dir>=inicio) dir=dir-1;
		if(esq<=dir){
			temp = v[esq];
			v[esq] = v[dir];
			v[dir] = temp;			
		}
	}

	// colocando a raiz no local correto	
 	meio = dir;

	
	return(meio);		
}

int main(){
int v[100] = {36, 83, 81, 22, 96, 0, 9, 15, 42, 28, 97, 20, 17, 54, 21, 49, 75, 88, 76, 38, 23, 48, 78, 46, 47, 72, 57, 52, 12, 85, 91, 41, 65, 73, 59, 87, 64, 66, 34, 89, 19, 67, 61, 40, 69, 31, 44, 1, 11, 98, 43, 45, 62, 7, 86, 39, 3, 26, 6, 50, 5, 37, 74, 18, 82, 56, 16, 2, 27, 99, 68, 70, 33, 32, 35, 13, 58, 80, 53, 79, 24, 63, 93, 8, 25, 55, 84, 92, 71, 77, 10, 90, 94, 4, 60, 51, 95, 30, 14, 29};

 quick_sort(v, 0, 99);

  int i=0;
  for(i=0;i<100;i++)
    printf("\nO elemento %d é %d", i, v[i]);
  return(0);
}
