#include<stdio.h>
#include<conio.h>

int main()
{
	float dolar, rl;
	printf("Digite o valor em reais para conversao: ");
	scanf("%f", &rl);
	dolar=rl/2.40;
	printf("O valor em dolares eh: %f", dolar);
	
	getch();
	return 0;
}
