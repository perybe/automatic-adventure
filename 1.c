#include <stdio.h>
#include <stdlib.h>

void troca(float*,float*);

void troca(float* a, float* b) //ponteiros
{

	float tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int argc, char* argv[])
{
	float x, y;
 
	x = 54;
	y = 43;

	printf("x= %f y= %f\n", x, y);

	//endereço
	troca(&x,&y);

	printf("x= %f y= %f\n", x, y);

	return EXIT_SUCCESS;
}
