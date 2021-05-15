#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B, area, perimetro;
	printf("Digite a medida do lado A do retangulo: ");
	scanf("%f", &A);
	printf("Digite a medida do lado B do retangulo: ");
	scanf("%f", &B);
	area=(A*B);
	printf("A area total do retangulo eh: %f",area);
	perimetro=(2*A)+(2*B);
	printf("O perimetro do retangulo eh: %f", perimetro);
	
	getch();
	return 0;
}
