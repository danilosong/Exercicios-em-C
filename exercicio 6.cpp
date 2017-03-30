#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float ht, vh, dt, pd, sl, sb, desconto;
	printf("\n Digite as horas trabalhadas \n");
	scanf("%f", &ht);
	printf("\n Digite o valor das horas \n");
	scanf("%f", &vh);
	printf("\n Digite os dias trabalhados \n");
	scanf("%f", &dt);
	printf("\n Digite o percentual de desconto \n");
	scanf("%f", &pd);
	pd = pd/100;
	sb = vh * dt * ht;
	sl = sb - (pd * sb);
	desconto = pd * sb;
	printf("\n O salário bruto é %6.2f \n", sb);
	printf("\n O salário liquido é %6.2f \n", sl);
	printf("\n O valor de desconto é %2.2f reais \n", desconto);
	system("pause");
}

