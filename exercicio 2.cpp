#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float fah, cel;
	printf("\n Digite o Grau em Fahrenheit \n");
	scanf("%f", &fah);
	cel = (fah-32)/1.8000;
	printf("\n A temperatura em Celcius é %3.2f \n", cel);
	system("pause");	
}
