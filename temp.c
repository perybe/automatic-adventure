#include <stdio.h>

float conversao (float);

float conversao (float f)
{
	float c;

	c = 5.0f * (f - 32.0f) / 9.0f;

	if ((c <= -268) && (c >=-278))
	{
		printf("zero absoluto\n");
	}
	else
	{
		if(c >= 5 && c <= 5)
		{
			printf("congelamento da água\n");
		}
		else
		{
			if(c >= 95 && c <= 105)
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
