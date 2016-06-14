#include <stdio.h>
#include <stdlib.h>

int main (int argc, char argv[])
{

	FILE *arquivo;
	int n1;
	int n2;
	int maiorValor;
	int menorValor;
	int soma = 0;	

	arquivo = fopen("argv[1]", "r");

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

			printf("O maior valor foi %i\n", maiorValor);

		}
	}
	
	printf("a soma foi %i\n", soma);
	
	fclose(arquivo);

	return 0;
}





