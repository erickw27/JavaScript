#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//#include <strbool.h>
#define indice 2


struct cadastro
{
int   cod;
int   depto;
int   cargo;
char  cpf[10];
char  nome[30];
char  email[20];
char  end[40];    
float salario;
};

typedef struct cadastro Cadastro;

Cadastro cad[indice];
void menu();
void listar();

int main()
{
menu();
listar();
return 0;
}

void menu()
{
int i;
    for(i=0; i<indice; i++)
    {
    printf("\n Digite o Nome: \t");
    scanf(" %s",&cad[i].nome);
    printf("\n Digite o Email: \t");
    scanf(" %s",&cad[i].email);
    printf("\n Digite o CPF: \t");
    scanf(" %s",&cad[i].cpf);
    printf("\n Digite o salario: \t");
    scanf(" %f",&cad[i].salario);    
    }
}

void listar()
{
int i;
    for(i=0; i<indice; i++)
    {
    printf("\n Nome: %s",cad[i].nome);
    printf("\n Email: %s",cad[i].email);
    printf("\n CPF: %s",cad[i].cpf);
    printf("\n Salario: %.2f", cad[i].salario);
    }
}
