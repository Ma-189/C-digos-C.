#include<stdio.h>
#include<conio.h>

int main()
{
	float salario_bruto, salario_liquido, horas, adicionais;
	printf("Digite o salario bruto: ");
	scanf("%f", &salario_bruto);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &horas);
	if (horas>160){
		horas=(horas-160);
		adicionais=(salario_bruto/160)+(horas*0.50);
		salario_bruto=(adicionais+salario_bruto);}
	if (salario_bruto<800.000){
		salario_liquido=salario_bruto;
		printf("O salario liquido eh: %f", salario_liquido);}
	else 
	if ((salario_bruto=800.000)&&(salario_bruto=1600.00)){
		salario_liquido=(salario_bruto-(salario_bruto*0.13));
		printf("O salario liquido eh: %f", salario_liquido);}
	else
	salario_liquido=(salario_bruto-(salario_bruto*0.22));
	printf("O salario liquido eh: %f", salario_liquido);
	
	getch();
	return 0;
}
