typedef struct lista Lista;
typedef struct fila Fila;

Fila* criar();

void inserir(Fila *f, int valor);

int remover(Fila *f);

int vazia(Fila *f);

int somatorio(Fila *f);

void imprimir(Fila *f);

void liberar(Fila *f);

Fila* remover_ocorrencia(Fila *f, int x);