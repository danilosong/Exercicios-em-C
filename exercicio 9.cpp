#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float num2;
	int num1, poten;
	printf("\n Digite um n�mero inteiro, potencia��o ao quadrado. \n");
	scanf("%d", &num1);
	printf("\n Digite um n�mero inteiro raiz. \n");
	scanf("%f", &num2);
	poten = num1*num1;
	printf("\n O valor da pot�ncia de dois � %3.0d", poten);
	printf("\n O valor da raiz � %2.2f \n", sqrt(num2));
	system("pause");
}
