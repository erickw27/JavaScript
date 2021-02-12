# include <stdlib.h>

void main()
{
	char sexo;
	float altura, pIdeal;
	
	printf("Qual a sua Altura: ");
	scanf ("%f", &altura);
	
    printf("Informe seu sexo? (F  ou M)");
	scanf ("%d", &sexo);
	
	if (sexo == 'F' || sexo == 'f')//para verdade
	pIdeal = (62.1* altura)-44.7;
	else //para falso
	pIdeal = (72.7* altura)-58;
	
	printf ("Seu peso ideal é ... %6.2f", pIdeal);
}
