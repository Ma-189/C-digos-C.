#include<stdio.h>
#include<conio.h>

int main()
{
	float distancia, tempo, velocidade, litros_usados;
	printf("Entre com o tempo:");
	scanf("%f", &tempo);
	printf("Entre com a velocidade:");
	scanf("%f", &velocidade);
	distancia=tempo*velocidade;
	litros_usados=distancia/12;
	printf("A velocidade eh: %f", velocidade);
	printf("O tempo gasto eh: %f", tempo);
	printf("A distancia percorrida eh: %f", distancia);
	printf("A quantidade de litros usados eh: %f", litros_usados);
	
	getch();
	return 0;
}
	
