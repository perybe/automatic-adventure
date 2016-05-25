#include <stdio.h>


struct scliente 
{
	char nome[40];		//até 40 caracteres
	int idade;		// em anos
	char endereco[100];	//até 100 caracteres
	int conta;		//numero da conta no vetor contas
	char cgc [15]; 		// numero do cadastro geral de contriubuintes 
} clientes[2000];

struct sconta
{
	int cliente;	//nuemero do cliente no vetor de contas
	int tempo;	//em anos, desde a abertura da conta
	float saldo;	// em reais
} contas[2000];

int main()
{
	strcpy (clientes[0].nome, "michel");
	clientes[0].idade = 40;
	strcpy (clientes[0].endereco, "palacio");
	clientes[0].conta = 0;
	strcpy (clientes[0].cgc, "123.123.123-12");


	contas[0].cliente = 0;
	contas[0].tempo = 2016;
	contas[0].saldo = 200.000;

	return 0;
}
