#include <stdio.h>

int main ()
{

	FILE *arquivo;
	int n1;
	int n2;
	int maiorValor;
	int menorValor;
	int soma = 0;
	char t[50];


	scanf("%s", t);
	

	arquivo = fopen("t", "r");

	while(!feof(arquivo))
	{
		if((fscanf(arquivo,"%i", &n1) == 1) && (fscanf(arquivo,"%i", &n2) == 1))
		{
			if(n1>n2)
			{
				maiorValor = n1;
				menorValor = n2;
			}
			else
			{
				maiorValor = n2;
				menorValor = n1;
			}
			
			soma = soma + menorValor;

			printf("O maior valor foi %i", maiorValor);

		}
	}
	
	printf("a soma foi %i", soma);
	
	fclose(arquivo);

	return 0;
}





