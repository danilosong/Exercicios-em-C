#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int dias, faltas;
	printf("\n Digite os dias letivos do aluno \n");
	scanf("%d", &dias);
	faltas = 0.25*dias+dias-dias;
	printf("\n A quantidade máxima de faltas é %d \n", faltas);
	system("pause");
	
}
