#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"

/*PREZADO(A) ALUNO(A) NÃO EDITAR ESSE ARQUIVO.*/
int main (){
    Arv* a=
            arv_cria_no('a',
                arv_cria_no('b',  
                    arv_cria_no('d', 
                        arv_cria_no('f',arv_cria_vazia(),arv_cria_vazia()), 
                        arv_cria_no('g',arv_cria_vazia(),arv_cria_vazia())
                    ),
                    arv_cria_no('e', 
                        arv_cria_no('h',arv_cria_vazia(),arv_cria_vazia()), 
                        arv_cria_no('i',arv_cria_vazia(),arv_cria_vazia()))
                    ),
                arv_cria_no('c',arv_cria_vazia(),arv_cria_vazia())
            );
    Arv* b = arv_cria_no('1', 
                        arv_cria_no('2',arv_cria_vazia(),arv_cria_vazia()), 
                        arv_cria_no('3',arv_cria_vazia(),arv_cria_vazia())
                    );
    a = arv_insere_direita(a, b);
    arv_imprime(a);
    arv_libera(a);
}