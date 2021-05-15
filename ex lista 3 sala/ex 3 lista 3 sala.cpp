#include<stdio.h>
#include<conio.h>

int main()
{
	int i, num;
	printf("Digite um numero qualquer: ");
	scanf("%i", &num);
	printf("Tabuada do %i\n", num);
	for (i=0; i<=10; ++i)
	printf("%i X %i = %i\n", num, i, num*i);
	
	getch();
	return 0;
}
