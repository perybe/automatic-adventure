#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 /*tamanho do array*/

int main()
{


    int s[ SIZE ]; /* array s tem SIZE elementos*/
    int i; /*contador do s*/
    int total = 0;
  
    FILE *arquivo; // ponteiro do arquivo

    arquivo = fopen ("freq.txt", "r"); //abre o arquivo freq

    for( i = 0; i < SIZE; i++) // modifica o numero do i  somando +1 até chegar ao 9(s[i])
    {
        fscanf(arquivo,"%i", &s[i]);	//le o valor para cada s[i]
    }

    s['A']++;	// quando tiver o caracter A somar 1
    s['B']++;	// quando tiver o caracter B somar 1
    s['C']++;	// quando tiver o caracter C somar 1

    fclose(arquivo);	//fecha o arquivo

    for( i = 0; i <SIZE; i++)	// conta de o até 9 o i
    {
        total += s[i];	// soma todos os valores de s[i]
    }

    printf("%8s %13s\n", "ELEMENTO", "VALOR"); // escrever elemento 8 espaços dps e escrever valor 13 espaços depois

    for(i = 0; i < SIZE; i++) //contar de 0 até 9 o i
    {
        if (s[i] != 0) // se  s[i] for diferente de 0 adere a um comando
        {
            printf("%8d %4c %5x %13d\n", i, i, i, s[i]); //exibe 
        }
    }

    printf( "%8s%13d\n", "TOTAL", total); //escreve o total

    return EXIT_SUCCESS;
}


