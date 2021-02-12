#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	char frase [100];
	printf("Digite:");
	gets(frase);
	for(i=0; i<=strlen(frase); i++) //descobri o tamanho da string
	{
		if((frase[i]=='a')||(frase[i]=='e')||(frase[i]=='i')||(frase[i]=='o')||(frase[i]=='u'))
		frase[i]=toupper(frase[i]); //topper converter em maiusculo
	}
	puts(frase);
	getch();
}
