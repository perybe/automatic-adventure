#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;

	FILE *arquivo;

	char t[50];

	scanf("%s", t);
	
	arquivo = fopen("t", "r");

	while(!feof(arquivo))
	{
			if(fscanf(arquivo, "%i", &i) == 1)
			{
			fscanf(arquivo, "%i", &i);	
			}
	}
	
	fclose(arquivo);

	return 0;

}
