#include<stdio.h>
#include<conio.h>

int main()
{
    int numero; float quadrado;
	printf("Digite um numero inteiro:");
	scanf("%i", &numero);
	quadrado=numero*numero;
	printf("O valor do quadrado eh: %f" , quadrado);
	
	getch();
	return 0;
}
