#include<stdio.h>
#include<conio.h>

int main()
{
	float area, comprimento, raio;
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &raio);
	area=3.1416*(raio*raio);
	printf("A area do circulo eh: %f", area);
	comprimento=2*3.1416*raio;
	printf("O comprimento do circulo eh: %f", comprimento);
	
	getch();
	return 0;
}
