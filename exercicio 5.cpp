#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float sal, rea;
	printf("\n Digite o sal�rio \n");
	scanf("%f", &sal);
	rea = 0.12*sal+sal;
	printf("\n O reajuste do sal�rio � %5.2f \n", rea);
	system("pause");
}
