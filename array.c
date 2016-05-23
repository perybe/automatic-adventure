#include <stdio.h>
#define SIZE 13
int main() 
{

	int f[SIZE];
	int count;
	
	for (count=0; count < SIZE; count++)
{ f[count]= count;

	switch (f[count]){
	case 1: {printf ("janeiro\n");break;}
	case 2: {printf ("fevereiro\n");}
	case 3: {printf ("março\n");break;break;}
	case 4: {printf ("abril\n");break;}
	case 5: {printf ("maio\n");break;}
	case 6: {printf ("junho\n");break;}
	case 7: {printf ("julho\n");break;}
	case 8: {printf ("agosto\n");break;}
	case 9: {printf ("setembro\n");break;}
	case 10: { printf ("outrubro\n");break;}
	case 11: { printf ("novembro\n");break;}
	case 12: { printf ("dezembro\n"); break;}
	default: {printf ("erro\n");}}}
{
return 0;
}}
