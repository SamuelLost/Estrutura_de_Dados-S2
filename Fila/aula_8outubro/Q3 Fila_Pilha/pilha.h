#define N 20
typedef struct pilha{
    int topo;
    int v[N];
}Pilha;

Pilha* criar();

void inserir(Pilha *p, int valor);

int remover(Pilha *p);

int vazia(Pilha *p);

int cheia(Pilha *p);

void imprimir(Pilha *p);

void liberar(Pilha *p);
