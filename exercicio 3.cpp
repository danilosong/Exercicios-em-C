#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, resultado;
	printf("\n digite a primeira nota \n");
	scanf("%f", &nota1);
	printf("\n digite a segunda nota nota \n");
	scanf("%f", &nota2);
	resultado = (nota1 + nota2)/2;
	printf("\n O resultado é %2.2f \n", resultado);
	system("pause");
}
