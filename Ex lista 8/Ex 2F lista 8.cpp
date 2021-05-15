#include<stdio.h>
#include<conio.h>


    int Fibonacci(int a=0, int b=1);
	int aux, i, p;

int main()
{
	int a, b;
	printf("Digite um numero: ");
	scanf("%i", &p);
	printf("%i\n", b);
	Fibonacci(a, b);}
	
	int Fibonacci(int a, int b)
	{for(i=0; i<p; ++i)
    {aux=a+b;
    a=b;
	b=aux;
	printf("%i\n", aux);}
	
	getch();	
}
