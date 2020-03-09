typedef struct arv Arv;

/*Função que cria uma Árvore Binária Vazia.*/
Arv* arv_cria_vazia(void);
/*Função que cria um nó em uma Árvore Binária.*/
Arv* arv_cria_no(char c, Arv *sae, Arv *sad); 
/*Testa se uma Árvore Binária é vazia.*/
int arv_vazia(Arv *a);
/*Função que imprime os elementos de uma Árvore Binária.*/
void arv_imprime(Arv *a);
/*Função que determina se um caractere pertence à Árvore.*/
int arv_pertence(Arv *a,char c);
/*Libera o espaço alocado para uma Árvore Binária.*/
void arv_libera(Arv *a);
/*Função que imprime os elementos de uma Árvore Binária na ordem simétrica.*/
void arv_imprime_ordem_simetrica(Arv *a);
/*Função que imprime os elementos de uma Árvore Binária na pós-ordem.*/
void arv_imprime_pos_ordem(Arv *a);

/*Função que conta o número de folhas de uma árvore.*/
int arv_conta_folhas(Arv *a);
/*Função que conta o número de nós internos de uma árvore.*/
int arv_conta_nos_internos(Arv *a);

/*Função que cria uma cópia de uma árvore.*/
Arv* arv_copia(Arv *a);