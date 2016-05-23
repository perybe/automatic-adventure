#include <stdio.h> 
#include <stdlib.h>

int main()
{ 
FILE *arquivo;
  int n;
int x = 0;
  char t [51];
	scanf ("%s", t);
	arquivo = fopen (t, "r");
	
	while (! feof ( arquivo) ){

		if ( fscanf ( arquivo, "%i", &n) == 1) 
		{x=x+1;}
}

printf ("%i\n", x);
 fclose(arquivo);
return 0; }

