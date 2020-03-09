typedef struct lista Lista;
typedef struct fila Fila;

struct lista{
   int valor;
   Lista *prox;   
};


struct fila{
   Lista *ini;
   Lista *fim;
};

Fila* criar();

void inserir(Fila *f, int valor);

int remover(Fila *f);

int vazia(Fila *f);

Fila* fila_copia(Fila *f);

void imprimir(Fila *f);

void liberar(Fila *f);
