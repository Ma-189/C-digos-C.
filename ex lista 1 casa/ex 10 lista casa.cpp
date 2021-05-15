#include<stdio.h>
#include<conio.h>

int main()
{
	int A, B, aux;
	printf("Digite o valor de A: ");
	scanf("%i", &A);
	printf("Digite o valor de B: ");
	scanf("%i", &B);
	aux=A;
	A=B;
	B=aux;
	printf("O novo valor de A eh: %i", A);
	printf("O novo valor de B eh: %i", B);
	
	getch();
	return 0;
}
