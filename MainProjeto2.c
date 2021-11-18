#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include "Prototipos.h"
#include "funcoes.c"

int main()
{
	double x;
	int N;
	do
	{
	printf("Digite o numero de termos que deseja calcular para a serie:\n");
	scanf(" %d", &N);
	if(N>= 1 && N<=20)
	{
		printf("Digite o valor de cosseno a ser calculado:\n");
		scanf(" %lf", &x);
		printf("O valor do cosseno e: %f\n", soma(x, N));
	}
	}while(N < 0 || N > 10);
	return 0;
}
