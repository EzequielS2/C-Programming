#include<stdio.h>
#include<stdlib.h>  
			// ** Para fprintf, sputs ou putc usamos para preencher o arquivo txt.

			// ** Para fscanf, fgets ou getc usamos para imprimir na tela o que j� est� no arquivo txt.
int main()
{			// No fprintf podemos colocar \n dentro do registro direto. fprintf(arq, "%s %d\n", t, n);
			// No fputs fazemos por partes(Liha por linha).  fputs(texto, arq); depois fputs("\n", arq); ** S� serve pra texto(Pode ter n�mero no texto).
	int n;
	char texto[50];
	FILE *arq;
	arq=fopen("dados.txt", "r");
	while(!feof(arq))
	{
		fgets(texto, 50, arq); // O fscanf s� l� string por string e n�o o texto.
					// Exemplo: "Maria da silva" - (fscanf s� l� Maria primeiro na string texto)
		printf("%s\n", texto); // Sempre que ler devemos colocar \n para imrpimir linha por linha.
	}
	fclose(arq);
}





	