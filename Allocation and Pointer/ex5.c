#include<stdio.h>
#include<stdlib.h>   // S� usa a biblioteca <stdlib.h>, quando for FAZER ALOCA��O DE MEMORIA.

int ret(int *a, int *b, int *soma, int *produto)
{
	*soma=0;
	*soma=*a+*b;
	*produto=(*a)*(*b);
	if(*a==*b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	int a, b, soma, produto, k;	
	printf("\n\nDigite dois numeros: ");
	scanf("%d, %d", &a, &b);
	k=ret(&a, &b, &soma, &produto); // *** N�o pode colocar a e b como ponteiros. E tem que colocar &.
		// *** coloquei k igual a fun��o pois a fun��o vai retornar um inteiro que n�o � ponteiro.
	if(k==1)
	{
		printf("\n\ns�o iguais os numeros\n");
	}
	else
	{
		printf("\n\nSao diferentes\n\n");
	}
	printf("\n\nSoma: %d, Produto: %d", soma, produto);
}