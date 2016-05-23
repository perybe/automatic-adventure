#include <stdio.h>


int main(void) {

	FILE *arquivo;
	int c;


    int cl = 0;
    int cb = 0;
    int cp = 0;
    int x = 0;

	char t [51];
	scanf ("%s", t);
	arquivo = fopen (t, "r");

	c = getc(arquivo);
    while( c != -1 )
    {
        cb++;
        if (c == '\n')
            cl = cl + 1;

        if  ((c !=' ') && (c !='\n') && (!x)) {
             x = 1;
          }
          if  (((c ==' ') || (c == '\n')) && (x)) {
             x = 0;
            cp++;
          }
		printf("%i %c %x\n", c, c, c);
		c = getc(arquivo);
	}

    printf("L=%i P=%i B=%i\n", cl, cp, cb);

    fclose(arquivo);


    return 0;
}
