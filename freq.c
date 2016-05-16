#include <stdio.h> 
#include <stdlib.h>
#define SIZE 256 /*tamanho do array*/

int main()
{

	int s[ SIZE ]; /* array s tem SIZE elementos*/
	int i; /*contador do s*/
	int total = 0;

	for( i = 0; i < SIZE; i++)
	{
		s[i] = 0 ;
	}

	s['A']++;
	s['B']++;
	s['C']++;
	
	for( i = 0; i <SIZE; i++)
	{
		total += s[i];
	}
	
	printf("%8s %13s\n", "ELEMENTO", "VALOR");

	for(i = 0; i < SIZE; i++)
	{
		if (s[i] != 0)
		{
		printf("%8d %4c %5x %13d\n", i, i, i, s[i]);
		}
	}

	printf( "%8s%13d\n", "TOTAL", total);

	return EXIT_SUCCESS;
}

