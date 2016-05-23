#include <stdio.h>

int main(int argc, char* argv[])
{	printf("teste de parametro.\n");

	printf("Nosso programa recebeu %i argumentos\n", argc);
	int i;
	for (i = 0 ; i<argc ; i++){
	printf("Parametro %i tem Valor %s.\n",i , argv[i]); 
	}
return 0;
}
