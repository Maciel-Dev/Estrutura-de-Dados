#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tadlista.h"

//***********************************************************************
//*
//* IMPLEMENTAÇÃO DA INTERFACE DO TAD LISTA
//*
//***********************************************************************

Lista criaLista(){

    Lista lst = (tcabec *)malloc(sizeof(tcabec));
    lst -> primeiro = NULL;
    lst -> ultimo = NULL;
    lst -> tamanho = 0;

    return lst;

}

Lista appendLista(Lista lst, tdado dado){
    //Criando a próxima lista
    pnoh novoNo = (pnoh)malloc(sizeof(tnode));
    novoNo -> proximo = NULL;
    novoNo->dado = dado;

    if(lst->tamanho == 0){
        //pnoh novoNo = (pnoh)malloc(sizeof(tnode));
        //novoNo -> proximo = NULL;
        //novoNo->dado = dado;

        lst->primeiro = novoNo;
        lst->ultimo = novoNo;
        lst->tamanho++;
    }
    else {
        //pnoh novoNo = (pnoh)malloc(sizeof(tnode));
        //novoNo -> proximo = NULL;
        //novoNo->dado = dado;

        lst->ultimo->proximo = novoNo;
        lst->ultimo = novoNo;
    }

    return lst;
}

tdado dadoLista(Lista lst, int pos){
    //Tarefa
}

int lenLista(Lista lst){
    return lst->tamanho;
}
tdado primLista(Lista lst){
    return lst->primeiro->dado;
}
tdado ultLista(Lista lst){
    return lst->ultimo->dado;
}
int indexLista(Lista lst, tdado dado);
Lista clearLista(Lista lst);
Lista insertLista(Lista lst, int pos, tdado dado);
Lista removeLista(Lista lst, int pos);
