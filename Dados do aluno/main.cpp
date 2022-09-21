#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome[20];
    char endereco[40];
    char cidade[25];
    char estado[30];
    char telefone[15];

    printf("\n Digite o nome do Aluno: ");
    fgets(nome, 20, stdin);

    printf("\n Digite o Endereco: ");
    fgets(endereco, 40, stdin);

    printf("\n Digite a Cidade: ");
    fgets(cidade, 25, stdin);

    printf("\n Digite o Estado: ");
    fgets(estado, 30, stdin);
    
    printf("\n Digite seu telefone: ");
    fgets(telefone, 15, stdin);

    printf("\n CADASTRO DE ALUNO \n");


        printf("\n Nome: %s", nome);
        printf("\n Endereco: %s", endereco);
        printf("\n Cidade: %s", cidade);
        printf("\n Estado: %s", estado);
        printf("\n Telefone: %s", telefone);

    getchar();

    return(0);
}
