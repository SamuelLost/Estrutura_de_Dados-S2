typedef struct lista Lista;
typedef struct fila Fila;

struct lista{
   int valor;
   Lista *prox;   
};


struct fila{
   Lista *ini;
   Lista *fim;
   int qnt;
};

Fila* criar();

void inserir(Fila *f, int valor);

int remover(Fila *f);

int vazia(Fila *f);

void fura_fila(Fila *f, int valor, int pos);

void imprimir(Fila *f);

void liberar(Fila *f);
