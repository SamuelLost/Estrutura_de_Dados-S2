#include "time.h"
typedef struct hash Hash;

/*Função que cria uma tabela hash com um dado tamanho.*/
Hash* hash_cria(int tamanho);
/*Retorna o código hash de um dado time.*/
int hash_hash(Hash *h, char* n);
/*Retorna o funcionário que possui um dado nome.*/
Time* hash_busca(Hash *h, char* nome);
/*Função que adiciona um elemento em uma tabela hash.*/
void hash_insere(Hash *h, Time *t);
/*Função que remove um elemento de uma tabela hash.*/
void hash_remove(Hash *h, Time *t);
/*Função que imprime os elementos de uma tabela hash.*/
void hash_imprime(Hash *h);
/*Retorna a taxa de ocupação da tabela hash.*/
float hash_tx_ocupacao(Hash *h);
/*Libera o espaço alocado para uma tabela hash.*/
void hash_libera(Hash *h);
/*Retorna o número de colisões da tabela hash.*/
int hash_num_colisoes(Hash *h);
