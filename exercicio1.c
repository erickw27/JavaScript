# include <stdio.h>
# include <stdlib.h>

void main()

{
	int cargo;
	float Satual, reajuste;
	
	
	printf ("informe o cargo: ");
	scanf ("%d", &cargo);
	
	printf ("Qual o salario atual: ");
	scanf("%f", &Satual);
	
	if (cargo == 1)
	reajuste = (Satual* 7)/100;
	
	else if (cargo == 2)
	reajuste = (Satual* 9)/100;
	
	else if (cargo == 3)
	reajuste = (Satual* 5)/100;
	
	else if (cargo == 4)
	reajuste = (Satual* 12)/100;
	
	else
	reajuste = (Satual* 20)/100;
	
	printf ("Novo salario: %f", reajuste);
	printf("Salario atual: %f", Satual+reajuste);
	
}

