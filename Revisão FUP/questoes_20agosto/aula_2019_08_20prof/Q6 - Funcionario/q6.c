#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario {
    char nome[100];
    float salario;
} Funcionario;

typedef struct empresa {
    char nome[100];
    int qtdFuncionarios;
    Funcionario funcionarios[10];
} Empresa;

Empresa* criarEmpresa(char *nomeEmpresa) {
    Empresa *empresa = (Empresa*) malloc(sizeof(Empresa));
    strcpy(empresa->nome,nomeEmpresa);
    empresa->qtdFuncionarios = 0;
    
    return empresa;
}
void admitirFuncionario(Empresa *empresa) {
    Funcionario *func = (Funcionario*) malloc(sizeof(Funcionario));
    printf("Digite os dados do funcionário(Nome e salário)");
    scanf(" %[^\n]",func->nome);
    scanf("%f",&(func->salario));
  empresa->funcionarios[empresa->qtdFuncionarios] = *func;
    empresa->qtdFuncionarios++;
}

int main(){
    
    char nome_empresa[20];
    
    printf("Qual o nome da empresa");
    scanf(" %[^\n]", nome_empresa);
    Empresa *e = criarEmpresa(nome_empresa);
    
    admitirFuncionario(e);
    admitirFuncionario(e);
    
    printf("Os funcionários da empresa são:\n");
    for(int i=0;i<e->qtdFuncionarios;i++){
        printf("\n%s", e->funcionarios[i].nome);
        printf("\n%f", e->funcionarios[i].salario);
    }
    
    free(e);
    
    return(0);
}
