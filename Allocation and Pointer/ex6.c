#include<stdio.h>
#include<stdlib.h>   // S� usa a biblioteca <stdlib.h>, quando for FAZER ALOCA��O
#define tam 20

char *strin(char *a, char *b, int pos)
{
	*(a+pos)=*(b+pos);
	return (a);
}

int main()
{
	int pos;
	char a[tam], b[tam];
	printf("\n\nDigite a posi��o que vaimudar: ");
	scanf("%d", &pos);
	fgetc(stdin);
	printf("\n\nDigite uma palavra: ");
	gets(a);
	printf("\n\nDigite outra palavra: ");
	gets(b);
	strin(a, b, pos);
	printf("\n\nString alterada: %s", a);
}