# include <stdlib.h>

void main()
{
float Pterra, Pplaneta;
int n;

printf("\t \t \t Tabela de planetas \n");
printf("\t 1- Mercurio \t 2- Venus \t 3- Marte \n");
printf("\t 4- Jupiter \t 5- Saturno \t 6- Urano \n");
printf("\t Escolha o planeta: ");
scanf ("%d", &n);

printf ("Iforme o peso do planeta terra: ");
scanf ("%d", &Pterra);

switch (n)

{
	case1:
	Pplaneta= (Pterra/10)*0.37;
	break;
	
	case 2: 
	Pplaneta= (Pterra/10)*0.88;
	break;
	
	case 3: 
	Pplaneta= (Pterra/10)*0.38;
	break;
	
	
	case 4: 
	Pplaneta= (Pterra/10)*2.64;
	break;
	
	case 5: 
	Pplaneta= (Pterra/10)*1.15;
	break;
	
	case 6: 
	Pplaneta= (Pterra/10)*1.17;
	break;
	
	default:
	preintf("\t \t \t Numero de planeta invalido !!! \n");
}
printf("\t \t \t O peso do planeta escolhido referente a terra é ...%f \n", Pplaneta);
}

