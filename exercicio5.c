# include <stdio.h>
# include <stdlib.h>

void main ()

{
	int x;
	float soma, media, mem;
	
	printf("\t Digite o numero para o for: ");
	scanf("%d", &num);
	
	for (x=0; x<=num; x++)
	{
		printf ("\t Digite um numero%d para somar:  ",x)
		scanf("%f", &mem);
		soma+=mem;
	}
	media += soma/num;
	
	printf ("A media da soma é ... &7.2f \n", media);
}
