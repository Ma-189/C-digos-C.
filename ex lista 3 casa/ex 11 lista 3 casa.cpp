#include<stdio.h>
#include<conio.h>

int main()
{
	int a, num;
	printf("Digite um numero qualquer: ");
	scanf("%i", &num);
	printf("Tabuada do %i\n", num);
	for (a=0; a<=10; ++a)
	printf("%i X %i = %i\n", num, a, num*a);
	
	getch();
	return 0;
}
