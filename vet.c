#include <stdio.h>
#define JOGOS 3

struct sjogo{
	char timeA[40];
	char timeB[40];
	int golsA;
	int golsB;
	}jogo[JOGOS];

void resultadosDejogos(struct jogo vet[JOGOS])
{
	int cont, somaA = 0, somaB = 0;

	printf("%s",jogo[1].timeA);
	printf("%s",jogo[1].timeB);
	
	for(cont = 0; cont < JOGOS; cont++)
	{
		
		printf("%i",jogo[cont].golsA);
		printf("%i",jogo[cont].golsB);

		if(jogo[cont].golsA > jogo[cont].golsB)
		{
			somaA = somaA + 1;
			printf("o jogador %s ganhou", jogo[cont].timeA);
		}
		else
		{
			if(jogo[cont].golsB > jogo[cont].golsA)
			{
				somaB = somaB + 1;
				printf("o jogador %s ganhou", jogo[cont].timeB);
			}
			else
			{
				printf("empate");
			}
		}
	}

	if (somaA > somaB)
	{
		printf(" o time %s ganhou as partidas\n", jogo[1].timeA);
	}
	else
	{ 
		if(somaB > somaA)
		{
			printf(" o time %s ganhou as partidas\n", jogo[1].timeA);
		}
		else
		{
			printf("empate\n");
		}
	}
}

int main ()
{
	int i;
	int vet[JOGOS];

	for(i = 0; i < JOGOS; i++)
	{
		printf("Digite o nome do timeA.\n");
		fgets(jogo[i].timeA, 39, stdin);

		printf("Digite o nome do timeB.\n");
		fgets(jogo[i].timeB, 39, stdin);

		printf("número de gols do time A");
		scanf("%i", &jogo[i].golsA);

		printf("número de gols do time B");
		scanf("%i", &jogo[i].golsB);
	}

	resultadosDejogos(vet);

}
