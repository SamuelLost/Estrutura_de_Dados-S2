#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
typedef struct {
    char nome[81];
    int idade;
}Paciente;
void bolha_Paciente(Paciente *a, int *n);
void ler_Paciente(Paciente *a, int *n);
int main() {
    setlocale(LC_ALL,"portuguese");
    int *n = (int*) malloc(sizeof(int));
    printf("Digite a quantidade de pacientes: ");
    scanf("%d", n);
    Paciente *a = (Paciente*) malloc((*n) * sizeof(Paciente));
    ler_Paciente(a,n);
    bolha_Paciente(a,n);
    free(a);
    free(n);
}
void ler_Paciente(Paciente *a, int *n) {
    for(int i=0; i<(*n); i++) {
        printf("\nDigite o nome do paciente %d: ", i+1);
        scanf(" %[^\n]", a[i].nome);
        printf("Digite a idade do paciente %d: ", i+1);
        scanf("%d", &a[i].idade);
    }
}
void bolha_Paciente(Paciente *a, int *n){
    int i, j;
    Paciente temp;
    for(i=(*n)-1;i>0;i--){ 
       for(j=0;j<i;j++){
            if(a[j].idade > a[j+1].idade){ 
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
           }
       }
    }
    for(int k=0; k<(*n); k++) {
        printf("\nNome: %s\nIdade: %d\n",a[k].nome, a[k].idade);
    }    
}