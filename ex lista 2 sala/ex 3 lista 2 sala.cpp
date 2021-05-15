#include<stdio.h>
#include<conio.h>

int main()
{
	float valor1, valor2, diferenca;
	printf("Digite o 1º valor: ");
	scanf("%f", &valor1);
	printf("Digite o 2º valor: ");
	scanf("%f", &valor2);
	if (valor1==valor2){
		printf("Os numeros digitados sao iguais, entao nao existe diferenca entre eles");}
		else
	if (valor1<valor2){
	diferenca=valor2-valor1;}
	else{
	diferenca=valor1-valor2;}
	printf("A diferenca de numeros eh: %f", diferenca);
	
	getch();
	return 0;
}
