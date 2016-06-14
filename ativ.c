#include <stdio.h>
#define TAM 4


void linhasDeiguais(int mat[TAM][TAM])
{
	int i, j, cont = 0, linha = TAM ;

	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		{
			if(mat[i][j] == mat[i][j+1])
			{
				cont = cont + 1;
			}
			if (cont == 3)
			{
				linha = i;
				cont = 0;
			}
		}

		printf("\n");
	}
	
	if (linha != TAM )
	{
		printf("a linha %i é formada por números iguais\n", linha);
	}
	else
	{
		printf("nenhuma linha tem números iguais\n");
	}
}

int main ()
{
	int mat[TAM][TAM], i, j;
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%i", &mat[i][j]);
		}
		printf("\n");
	}

	linhasDeiguais(mat);

	return 0;
}
