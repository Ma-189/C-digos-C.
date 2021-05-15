#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, result;
	char operacao;
	char opcao;
	do{
    printf("Digite a operacao desejada (+, -, *, /) ou digite S para sair: \n");
	scanf("%c", &operacao);
	fflush(stdin);
	if (operacao != 'S'){
	printf("Digite um numero: \n");
	scanf("%i", &a);
	fflush(stdin);
	printf("Digite outro numero: \n");
	scanf("%i", &b);
	fflush(stdin);
	result=0;
	switch(operacao){
	case'+' : printf("O resultado eh: %i\n", result=a+b); break;
	case'-' : printf("O resultado eh: %i\n", result=a-b); break;
	case'*' : printf("O resultado eh: %i\n", result=a*b); break;
	case'/' : printf("O resultado eh: %i\n", result=a/b); break;
	default : printf("Operacao invalida \n");}}
	else 
	printf("Fechando calculadora");
	
	}while (operacao != 'S');
	
	getch();
	return 0;
}
