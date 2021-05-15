#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int cont, result;
	for(cont=0; cont<=15; cont++)
	{
	result= pow(3, cont);
	printf("%i\n", result);
	}
	
	getch();
	return 0;
}
