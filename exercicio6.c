# include <stdio.h>
# include <stdlib.h>

void main ()
{
	int destino, trecho;
	system("color 5f");
	  printf("______________________________Tabela de viagem_____________________________\n\n");
	  printf("\t 1-Regiao Norte \t \t 2- Regiao Nordeste \t \t 3- Regiao Centro Oeste");
	  printf("\t 4- Regiao Sul \t \t 5- Outras \n");
	  printf("   Informe o seu destino: ");
	  scanf("%d", destino);
	  
	  system("color 5b");
	  printf("____________________________________________\n");
	  printf("    Informe o trecho (1- ida e 2- ida e volta):");
	  scanf("%d", &trecho);
	  
	  if (destino == 1)
	  {
	  	if (trecho == 1)
	  	printf("Regiao norte(ida)= R$ 500,00");
	  	else 
		printf("Regiao norte (ida e volta)= 900,00");
	  }
	  else if (destino == 2)
	  {
	  	if (trecho == 1)
	  	printf("Regiao nordeste(ida)= R$ 900,00");
	  	else 
		printf("Regiao nordeste (ida e volta)= 1800,00");
	  }
	  else if (destino == 3)
	  {
	  	if (trecho == 1)
	  	printf("Regiao Centro-Oeste(ida)= R$ 300,00");
	  	else 
		printf("Regiao Centro-Oeste(ida e volta)= 700,00");
	  }
	  else if (destino == 4)
	  {
	  	if (trecho == 1)
	  	printf("Regiao Sul(ida)= R$ 300,00");
	  	else 
		printf("Regiao Sul(ida e volta)= 700,00");
	  }
	  else
	  {
	  	if (trecho == 1)
	  	printf("Regiao Outas(ida)= R$ 300,00");
	  	else 
		printf("Regiao Outras(ida e volta)= 700,00");
	  }
	  
}
