

void main()
{
	char sds [160], nome [50], sobrenome[100];
	puts("Digite nome ");
	gets(nome);
	printf("Digite sorenome ");
	gets(sobrenome);
	
	
	strcat(sds, "Olá seja bem vindo");
	strcat(nome, sobrenome);
	strcat(sds, nome);
	puts(sds);
	getch();
}

/*void main()
{
	//int i;
	char str1[50], str2[50],;
	puts("Digite strr2 ");
	gets(str2);
	
	strcat(str1, str2);
	printf("voce digitou %s", str1);
	
	gets();
}*/
