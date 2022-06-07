#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tadlista.h"

Lista preencheLstStrs(char *nomearq){
    FILE *arq = fopen(nomearq, "rt");
    char *linha;
    Lista lst = criaLista();

    while(!feof(arq)){
        linha = (char*)malloc(sizeof(char)*256);
        fgets(linha, 255, arq);
        linha[strlen(linha)-1] = '\0';
        appendLista(lst, linha);
    }

    fclose(arq);
    return lst;
}

Lista preencheLstInts(char *nomearq){
    FILE *arq = fopen(nomearq, "rt");
    char *linha;
    Lista lst = criaLista();
    int dadoInt;

    while(!feof(arq)){
        linha = (int*)malloc(sizeof(int)*256);
        fgets(linha, 255, arq);
        linha[strlen(linha)-1] = '\0';
        
        dadoInt = (int*)malloc(sizeof(int));
        dadoInt* = atoi(linha);
        appendLista(lst, dadoInt);

    }

    fclose(arq);
    return lst;
}

Lista preencheLstFloats(char *nomearq){
    FILE *arq = fopen(nomearq, "rt");
    Lista lst = criaLista();
    float *dadoFloat;

    while(!feof(arq)){
        dadoFloat = (float*)malloc(sizeof(float)*256);
        fscanf(arq, "%f", dadoFloat);
        appendLista(lst, dadoFloat);

    }

    fclose(arq);
    return lst;
}

Lista preencheLstPessoas(lstNomes, lstCpfs, lstIdades, lstAlturas){

    tpessoa *pessoa;
    Lista lst = criaLista();
    int quantidade = lenLista(lstNomes);

    for(int i=0; i < quantidade; i++){
        pessoa = (tpessoa*)malloc(sizeof(tpessoa));
        strcpy(pessoa->nome = (char *)dadoLista(lstNomes, i));
        strcpy(pessoa->cpf = (char *)dadoLista(lstCpfs, i));
        pessoa->idade = *((int *)dadoLista(lstIdades, i));
        pessoa->altura = *((float *)dadoLista(lstAlturas, i));
        appendLista(lst, pessoa);

    }

    return lst;

}

Lista salvaLstPessoas(lstPessoas, "bdnomes.txt", nomearq){
    
    tpessoa *pessoa;
    int quantidade = lenLista(lstPessoas);

    FILE *arq = fopen(nomearq, "wt")

    for(int i=0; i < quantidade; i++){
        pessoa = (tpessoa*)dadoLista(lstPessoas, i);

        fprintf(arq, "%s, %s, %d, %.2f\n", pessoa->nome, pessoa->cpf, pessoa->idade, pessoa->altura);
    }


    fclose(arq);
    return lst;

}

int main(int argc, char const *argv[])
{
    Lista lstNomes;
    Lista lstIdades;
    Lista lstCpfs;
    Lista lstAlturas;
    Lista lstPessoas;

    lstNomes = preencheLstStrs("bdnomes.txt");
    lstIdades = preencheLstStrs("bdidades.txt");
    lstCpfs = preencheLstStrs("bdcpfs.txt");
    lstAlturas = preencheLstStrs("bdalturas.txt");
    lstPessoas = preencheLstStrs();

    return 0;
}
