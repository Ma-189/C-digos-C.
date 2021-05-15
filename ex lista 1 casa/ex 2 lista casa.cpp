#include<stdio.h>
#include<conio.h>

int main()
{
	float dolar, rl;
	printf("Digite o valor em dolares para conversao: ");
	scanf("%f", &dolar);
	rl=dolar*2.40;
	printf("O valor em reais eh: %f", rl);
	
	getch();
	return 0;
}

