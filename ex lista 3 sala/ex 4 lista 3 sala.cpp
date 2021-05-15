#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	printf("Digite um numero menor ou igual a 50: ");
	scanf("%i", &num);
	while(num<250)
	{
		num=num*3;
	}
	printf("%i", num);
	
	getch();
	return 0;
}
