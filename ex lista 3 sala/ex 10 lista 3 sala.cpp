#include<stdio.h>
#include<conio.h>

int main()
{
	int a, soma=0;
	for (a=1; a<=500; ++a)
	if (a%2==0)
	soma=soma+a;
	{printf("%i\n", soma);}
	
	getch();
	return 0;
}
