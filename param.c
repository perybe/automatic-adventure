#include <stdio.h>

int main(int argc, char* argv[])

{
	printf("teste de parametros\n");
		
	printf("nosso programa recebeu %i argumentos\n", argc);
	
	int i;
	
	for(i = 0 ; i < argc; i++) 
	{
		printf("parametro %i tem valor %s.\n", i, argv[i]);
	}
	return 0;

}
