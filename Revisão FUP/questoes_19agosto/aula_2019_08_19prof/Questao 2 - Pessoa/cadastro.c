

#include <stdio.h>
#include <string.h>
#include "pessoa.h"

int main(){
    Pessoa p1, p2, p3;
    
    printf("Lendo os dados da pessoa 1(nome, endereço e telefone");
    scanf(" %[^\n]", p1.nome);
    scanf(" %[^\n]", p1.endereco);
    scanf(" %[^\n]", p1.telefone);
    
    printf("Lendo os dados da pessoa 2(nome, endereço e telefone");
    scanf(" %[^\n]", p2.nome);
    scanf(" %[^\n]", p2.endereco);
    scanf(" %[^\n]", p2.telefone);
    
    printf("Lendo os dados da pessoa 3(nome, endereço e telefone");
    scanf(" %[^\n]", p3.nome);
    scanf(" %[^\n]", p3.endereco);
    scanf(" %[^\n]", p3.telefone);
    
    int result1 = strcmp(p1.nome, p2.nome);
    int result2 = strcmp(p2.nome, p3.nome);
    int result3 = strcmp(p1.nome, p3.nome);
    
    printf("Imprimindo em ordem crescente de nome");
    
    if(result1 < 0 && result3 < 0){
        printf("nome: %s, endereço: %s e telefone: %s", p1.nome, p1.endereco, p1.telefone);
        if(result2 < 0){
            printf("nome: %s, endereço: %s e telefone: %s", p2.nome, p2.endereco, p2.telefone);
            printf("nome: %s, endereço: %s e telefone: %s", p3.nome, p3.endereco, p3.telefone);
        }else{
            printf("nome: %s, endereço: %s e telefone: %s", p3.nome, p3.endereco, p3.telefone);
            printf("nome: %s, endereço: %s e telefone: %s", p2.nome, p2.endereco, p2.telefone);
        }
    
    }else{
        if(result1 > 0 && result2 < 0){
          printf("nome: %s, endereço: %s e telefone: %s", p2.nome, p2.endereco, p2.telefone);
            
            if(result3 < 0){
                printf("nome: %s, endereço: %s e telefone: %s", p1.nome, p1.endereco, p1.telefone);
                printf("nome: %s, endereço: %s e telefone: %s", p3.nome, p3.endereco, p3.telefone);
            }else{
                printf("nome: %s, endereço: %s e telefone: %s", p3.nome, p3.endereco, p3.telefone);
                printf("nome: %s, endereço: %s e telefone: %s", p1.nome, p1.endereco, p1.telefone);
            }
            
        }else{
            if(result3 > 0 && result2 > 0){
                printf("nome: %s, endereço: %s e telefone: %s", p3.nome, p3.endereco, p3.telefone);
                
                if(result1 < 0){
                    printf("nome: %s, endereço: %s e telefone: %s", p1.nome, p1.endereco, p1.telefone);
                    printf("nome: %s, endereço: %s e telefone: %s", p2.nome, p2.endereco, p2.telefone);
                }else{
                    printf("nome: %s, endereço: %s e telefone: %s", p2.nome, p2.endereco, p2.telefone);
                    printf("nome: %s, endereço: %s e telefone: %s", p1.nome, p1.endereco, p1.telefone);
                }
                
            }
        }
    }
    
    return(0);
}
