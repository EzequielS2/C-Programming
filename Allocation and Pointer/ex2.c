#include<stdio.h>
#include<stdlib.h>    // *** Nesse programa eu inverti a quest�o, coloquei pra calcular o maior para a e o menor para b.

void inverter(int *a, int *b, int *c)
{
	int aux; 
	if(*b>*a && *b>*c)
	{	
		aux=*b;
		*a=aux;
	}
	else if(*c>*a && *c>*b)
	{
		aux=*c;
		*a=aux;
	}
	else
	{
		*a=*a;
	}
	if(*c<*a && *c<*b)
	{
		aux=*c;
		*b=aux;
	}
	else
	{
		*b=*b;
	}		
}

int main()
{
	int i, a, b, c;
	printf("\n\nDigite os tres numeros: ");
	scanf("%d, %d, %d", &a, &b, &c);
	inverter(&a, &b, &c);     // Usamos & nas variaveis pra chamar a fun��o, pois ela associa o endere�o do vetor.
	printf("\n\nValor de a: %d, Valor de b: %d", a, b);
}

