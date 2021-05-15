#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	for (a=20; a>=1; --a)
	{
		if (a%2==0)
		printf("Numeros pares: %i\n", a);
		else
		if (a%2==1)
		printf("Numeros impares: %i\n", a);	
	}
	
	getch();
	return 0;
}
