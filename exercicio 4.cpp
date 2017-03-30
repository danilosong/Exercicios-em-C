#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int anos, dias, meses;
	printf("\n Informe sua idade \n");
	scanf("%d", &anos);
	dias = anos*365;
	meses = anos*12;
	printf("\n O usuário tem %d anos \n", anos);
	printf("\n %d dias \n", dias);
	printf("\n %d meses \n", meses);
	system("pause");
}
