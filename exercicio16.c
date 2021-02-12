#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define SIZE 400

	char nome[SIZE][50];
   	char email[SIZE][50];
   	int cpf[SIZE];
   	int telefone[SIZE];
   	int valor_consulta[SIZE];
   	int clinica[SIZE];  
	int horario_consulta[SIZE];
   	int op;
   	void cadastro();




typedef struct{
    char login[30]; 
    char senha[30]; 
	
} pessoa; pessoa p[10];



int main(){

	FILE *pont_arq;
	
	pont_arq = fopen("contabilidade3.txt", "a+");
	 
    char login[30]; 
    char senha[30]; 

    strcpy(p[0].login, "ADM"); 
    strcpy(p[0].senha, "123"); 

    printf("\nlogin:");
    scanf("%s", login); 

    printf("\nsenha:");
    scanf("%s", senha); 

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){ 
        printf("\nUsuario logado");
        void cadastro();
        	 int linha;
        	do{
        		printf("\n\n\nDigite o nome: ");
        		scanf("%s", &nome[linha]);
        		fprintf(pont_arq, "\nNome: %s", &nome);
        		printf("\nDigite o email: ");
        		scanf("%s", &email[linha]);
        		fprintf(pont_arq, "\nEmail: %s", &email);
        		printf("\nDigite o cpf: ");
        		scanf("%d", &cpf[linha]);
        		fprintf(pont_arq, "\nCpf: %d", &cpf);
        		printf("\nDigite o telefone do cliente: ");
        		scanf("%d", &telefone[linha]);
        		fprintf(pont_arq, "\nTelefone: %d", &telefone);
        		printf("\nDigite qual clinica o cliente se encontra: ");
        		scanf("%d", &clinica[linha]);
        		fprintf(pont_arq, "\nClinica: %d", &clinica);
        		printf("\nDigite qual o horario que o cliente quer marcar: ");
        		scanf("%d", &horario_consulta[linha]);
        		fprintf(pont_arq, "\nHorario: %d", &horario_consulta);
        		printf("\nDigite quanto ficou o valor da consulta: ");
        		scanf("%d", &valor_consulta[linha]);  
				fprintf(pont_arq, "\nValor Consulta: %d", &valor_consulta);      		
        		printf("\nDigite 1 para continuar ou outro valor para sair: ");
        		scanf("%d", &op);		 		      		
				linha++;
				
        		 
        		       		
        		
			}while(op==1);
		  
    }else{
        printf("Login e/ou senha incorretos"); 
    }
    return 0;
    
}
