#include<stdio.h>
#include<conio.h>

int main()
{
	float IMC, massa, altura;
	printf("Digite a massa(kg): ");
	scanf("%f", &massa);
	printf("Digite a altura(m): ");
	scanf("%f", &altura);
	IMC=massa/(altura*altura);
	printf("O IMC resultante eh: %f", IMC);
	
	getch();
	return 0;
	
}
