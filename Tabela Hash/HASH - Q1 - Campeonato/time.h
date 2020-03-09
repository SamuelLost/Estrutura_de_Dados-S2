typedef struct times Time;

/*Função que cria um Time com um nome, número de vitórias e saldo de gols.*/
Time* time_cria();
/*Função que retorna o nome de um time.*/
char* time_nome(Time *t);
/*Função que imprime um time*/
void time_imprime(Time *t);
/*Função que atualiza as vitórias e o saldo de gols de um time*/
void time_atualiza(Time *t, int vitorias, int saldo_gols);