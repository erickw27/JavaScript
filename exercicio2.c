# include <stdlib.h>

void main()
{
	char nome[30];
	int idade, dst, resfriado;
	float peso;
	
	printf ("Digite o nome: ");
	scanf ("%s", &nome);
	
	printf ("Digite a sua idade: ");
	scanf ("%d", &idade);
	
	printf ("Digite o seu peso: ");
	scanf ("%f", &peso);
	
	printf ("Voce tem DST? (1-Sim / 0-Não) ");
	scanf ("%d", &dst);
	
	printf ("Voce está resfriado ? (1-Sim / 0-Não) ");
	scanf ("%d", &resfriado);
	
	if ((idade >= 18 && idade <= 65) && peso >= 50 && !dst && !resfriado)// para verdade
	printf("Está apto a doar sangue ... %s", nome);
	
	else //para falso
	printf("\t \t \t\ !!!!!! Nao pode doar sangue !!!!!!");
	
}
