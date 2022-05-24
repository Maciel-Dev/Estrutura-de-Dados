typedef void *tdado;

typedef struct tnoh{
    tdado dado;
    struct tnoh *proximo;
} tnode;

typedef tnode* pnoh;

typedef struct {
    pnoh primeiro;
    pnoh ultimo;
    int tamanho;
} tcabec;

typedef tcabec* Lista;


//***********************************************************************
//*
//* INTERFACE DO TAD LISTA
//*
//***********************************************************************

Lista criaLista();
Lista appendLista(Lista lst, tdado dado);
int lenLista(Lista lst);
tdado primLista(Lista lst);
tdado ultLista(Lista lst);
tdado dadoLista(Lista lst, int pos);
int indexLista(Lista lst, tdado dado);
Lista clearLista(Lista lst);
Lista insertLista(Lista lst, int pos, tdado dado);
Lista removeLista(Lista lst, int pos);

