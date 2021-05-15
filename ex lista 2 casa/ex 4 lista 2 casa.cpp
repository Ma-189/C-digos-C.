#include<stdio.h>
#include<conio.h>

int main()
{
	int numero;
	printf("Digite um numero inteiro: ");
	scanf("%i", &numero);
	if (numero%2==0){
		printf("O numero digitado eh par");
	}
	else
	printf("O numero digitado eh impar");
	
	getch();
	return 0;
}

