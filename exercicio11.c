#include <stdio.h>

void main()
{
	char c;
	printf("\n digite uma frase");
	do
	{
		c=getchar();//lendo
		{
		if(c>= 97 && c<= 122)//minuscula
		c-=32;//maiuscula
		}
	  putchar(c);//imprimindo
	}
	while(c!='\n');//entrer
}
