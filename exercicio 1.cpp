#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	float cel, fah;
		setlocale(LC_ALL, "Portuguese");
		printf("\n Digite o Grau em Celcius \n");
		scanf("%f", &cel);
		fah = (9*cel+160)/5;
		printf("\n A temperatura em Fahrenheit é %3.2f \n", fah);
		system("pause");
		  
}
