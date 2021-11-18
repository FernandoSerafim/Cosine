#include "Prototipos.h"
#include<math.h>
float soma(double x, int tamanho)
{
	int i; //vai ser o meu expoente
	float somatorio = 0;
	
	for(i=0.0; i<tamanho; i++)
	{
		if(i==0)
		{
			somatorio = (float)(pow(x,i)/(fator(i))) + somatorio;
			i++; 
		}
		if(i != 0.0  && i%2 > 0)
		{
			somatorio = somatorio - (pow(x,i*2)/(fator(i*2)));
		}
		if(i != 0  && i%2 == 0)
		{
			somatorio = somatorio + (pow(x,i*2)/(fator(i*2)));
		}
		
	}	
return somatorio;	
}

int fator(float n) {
//casos base
//0! = 1
//1! = 1
if (n == 0 || n == 1)
return 1;
//passo recursivo
//n! = n * (n-1)!
return n * fator(n-1);
}
