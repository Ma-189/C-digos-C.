#include<stdio.h>
#include<conio.h>

int main()
{
	int numero, numero_chave;
	printf("Digite um numero inteiro: ");
	scanf("%i", &numero);
	numero_chave=20;
	if ((numero>=0)&&(numero<=100)){
	numero=(numero-numero_chave);
	printf("A distancia do numero digitado e o numero chave eh: %i", numero);
	if (numero<0)
	numero=(numero*-1);
	printf("A distancia do numero digitado e o numero chave eh: %i", numero);}
	else
    printf("Numero digitado incorreto");
	
	getch();
	return 0;
}
