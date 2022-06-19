#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void notas(int Valor, int *Notas100, int *Notas50, int *Notas20, int *Notas10, int *Notas5, int *Notas2, int *Notas1)
{
	*Notas100 = Valor / 100;
	*Notas50 = (Valor % 100) / 50;
	*Notas20 = ((Valor % 100) % 50) / 20;
	*Notas10 = (((Valor % 100) % 50) % 20) / 10;
	*Notas5 = ((((Valor % 100) % 50) % 20) % 10) / 5;
	*Notas2 = (((((Valor % 100) % 50) % 20) % 10) % 5) / 2;
	*Notas1 = ((((((Valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int Valor, Notas100 = 0, Notas50, Notas20, Notas10, Notas5, Notas2, Notas1;
	printf("Digite o valor a sacar\n"); 
	scanf("%i", &Valor);
	printf("Valor a sacar %i\n", Valor);
	notas(Valor, &Notas100, &Notas50, &Notas20, &Notas10, &Notas5, &Notas2, &Notas1);
	if(Notas100 !=0)
	{
		printf("%i Notas de 100\n", Notas100);
	}
	if(Notas50 !=0)
	{
		printf("%i Notas de 50\n", Notas50);
	}
	if(Notas20 !=0)
	{
		printf("%i Notas de 20\n", Notas20);
	}
	if(Notas10 !=0)
	{
		printf("%i Notas de 10\n", Notas10);
	}
	if(Notas5 !=0)
	{
		printf("%i Notas de 5\n", Notas5);
	}
	if(Notas2 !=0)
	{
		printf("%i Notas de 2\n", Notas2);
	}
	if(Notas1 !=0)
	{
		printf("%i Notas de 1\n", Notas1);
	}
	return 0;
}
