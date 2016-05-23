#include <stdio.h>
#include <math.h>
#define E 5.0f

float conversao (float);

float conversao (float f)
{
	float c;

	c = 5.0f * (f - 32.0f) / 9.0f;

	if (fabsf(c) <= E)
	{
		printf("zero absoluto\n");
	}
	else
	{
		if(fabsf(c - 100.0f) <= E)
		{
			printf("congelamento da água\n");
		}
		else
		{
			if(fabsf(c + 273.0f) <= E)
			{
				printf("ebuliçao da água\n");
			}
		}
	}

	return c;
}

float main(void)
{
	float f;
	float tc;
	
	printf("escreva a temperatura em fahrenheit: ");
	scanf("%f", &f);

	tc = conversao(f);

	printf("o valor da temperatura em celcius é %fC\n", tc);

	return 0;
}
