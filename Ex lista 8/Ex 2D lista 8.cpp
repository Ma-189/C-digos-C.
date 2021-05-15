#include<stdio.h>
#include<conio.h>
#include<math.h>


    int Potencia(int N, int M, int result)
    {
	for(result= pow(N, M);
	printf("O resultado da potencia eh: %i", result);)  
	return (0);}
	
int main()
{
	int N, M, result;
	
	printf("Digite um numero para a base: ");
	scanf("%i", &N);
	printf("Digite um numero para o expoente: ");
	scanf("%i", &M);
	Potencia(N, M, result);

getch();
}
