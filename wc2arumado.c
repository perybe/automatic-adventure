#include <stdio.h>
#include <stdlib.h>

char funcao (t) 
FILE *arquivo;
  int n;
int x = 0;
	arquivo = fopen (t, "r");
	
	while (! feof ( arquivo) ){

		if ( fscanf ( arquivo, "%i", &n) == 1) 
		{x=x+1;}
}

printf ("%i\n", x);
 fclose(arquivo);
return 0; }

int main() {

	FILE *arquivo;
	int c;

	char t [51];
		scanf ("%s", t);

    int cl = 0;
    int cb = 0;
    int cp = 0;

	arquivo = fopen(t, "r");

	c = getc(arquivo);
    while( c != -1 )
    {
        cb++;
        if (c == '\n')
            cl = cl + 1;
        if (c == ' ')
            cp = cp + 1;

		printf("%i %c %x\n", c, c, c);
		c = getc(arquivo);
	}

    printf("L=%i P=%i B=%i\n", cl, cp, cb);


	fclose(arquivo);


	return 0;
}
