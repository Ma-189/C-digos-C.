#include<stdio.h>
#include<conio.h>

int main()
{
	int Nr_coelhos; float Custo;
	printf("Digite a quantidade de coelhos: ");
	scanf("%i", &Nr_coelhos);
	Custo=(Nr_coelhos*0.70/18+10);
	printf("Com %i coelhos, o valor do custo sera de: %f", Nr_coelhos, Custo);
	
	getch();
	return 0;
	
}
