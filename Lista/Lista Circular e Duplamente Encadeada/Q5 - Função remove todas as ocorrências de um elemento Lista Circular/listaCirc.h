typedef struct lista_circ ListaCirc;

/* Cria uma lista circular vazia.*/
ListaCirc* lst_circ_cria(); 
/* Testa se uma lista circular é vazia.*/
int lst_circ_vazia(ListaCirc *l); 
/* Insere um elemento em uma lista circular.*/
ListaCirc* lst_circ_insere(ListaCirc *l, int info); 
/* Busca um elemento em uma lista circular.*/
ListaCirc* lst_circ_busca(ListaCirc *l, int info); 
/* Imprime uma lista circular.*/
void lst_circ_imprime(ListaCirc *l); 
/* Remove um elemento de uma lista circular. 
    Se o elemento não for encontrado, retorne o ponteiro para a própria lista. 
    Caso contrário, retorne o ponteiro anterior.*/
ListaCirc* lst_circ_remove(ListaCirc *l, int info); 
/* Remove um elemento de uma lista circular. 
    Se o elemento não for encontrado, retorne o ponteiro para a própria lista. 
    Caso contrário, retorne o ponteiro anterior ao da última remoção.*/
ListaCirc* lst_circ_remove_todos(ListaCirc *l, int info); 
/* Libera o espaço alocado por uma lista circular .*/
void lst_circ_libera(ListaCirc *l); 
/* IMPLEMENTE A Função que retorna o somatório de uma lista circular.*/
int lst_circ_somatorio(ListaCirc *l);