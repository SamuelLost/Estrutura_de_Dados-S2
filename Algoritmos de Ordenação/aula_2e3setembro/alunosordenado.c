#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
typedef struct {
    char nome[81];
    float ira;
}Aluno;
void ler(Aluno *a, int *n);
void insercao(Aluno *a, int *n);
int main() {
    setlocale(LC_ALL, "portuguese");
    int *n = (int*) malloc(sizeof(int));
    printf("Digite a quantidade de alunos: ");
    scanf("%d", n);
    Aluno *a = (Aluno*) malloc((*n) * sizeof(Aluno));
    ler(a,n);
    insercao(a,n);
    free(a);
    free(n);
    return 0;

}

void ler(Aluno *a, int *n) {
    for(int i=0; i<(*n); i++) {
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]", a[i].nome);
        printf("Digite o IRA do aluno %d: ", i+1);
        scanf("%f", &a[i].ira);
    }
    
}
void insercao(Aluno *a, int *n) {
    int i, j;
    Aluno temp; //criada uma struct aux
    for(i=1;i<(*n);i++){ 
        j=i-1;
        temp = a[i];
        while(j>=0 && a[j].ira > temp.ira){
            a[j+1] = a[j];
            j--;
        }
        a[j+1]= temp;   
    }    
    for(int k=0; k<(*n); k++) {
        printf("\nNome: %s\nIRA: %.2f\n", a[k].nome, a[k].ira);
    }
}