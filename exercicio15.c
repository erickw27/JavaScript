#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str1[100], str2[100], str3[100];
	puts("Digite string");
	gets(str1);
	
	strcpy(str2,str1);
	strcpy(str3,"Erick williams");
	
	printf("%s %s", str2, str3);
	getch();
}
