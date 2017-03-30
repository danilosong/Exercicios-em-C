#include <stdio.h>
#include <stdlib.h>

main(){
	int valor1, valor2, toral;
	printf("escreva um numero");
	scanf("%d", &valor1);
	printf("escreva um numero");
	scanf("%d", &valor2);
	toral = valor1 + valor2;
	printf("o valor é %d", toral);
	system("pause");
}
