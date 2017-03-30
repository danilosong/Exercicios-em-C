#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int vala, valb, troc;
	printf("\n Insira um valor numerico -A- \n");
	scanf("%d", &vala);
	printf("\n Insira um valor numerico -B- \n");
	scanf("%d", &valb);
	
	troc = vala;
	vala = valb;
	valb = troc;
	
	printf("\n A troca do valor A é %d \n", vala);
	printf("\n A troca do valor B é %d \n", valb);
	system("pause");
}
