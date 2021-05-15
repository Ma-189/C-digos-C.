#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	a=1;
	do{
		if (a%2==0)
		printf("Numeros pares: %i\n", a);
		else 
		if (a%2==1)
		printf("Numeros impares: %i\n", a);
		++a;
	}
	while (a<=20);
	
	getch();
	return 0;
}
