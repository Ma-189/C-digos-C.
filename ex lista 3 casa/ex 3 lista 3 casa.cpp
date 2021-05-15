#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	a=1;
	while (a<=20)
	{
		if (a%2==0)
		printf("Numero par: %i\n", a);
		else
	    if (a%2==1)
	    printf("Numero impar :%i\n", a);
	    ++a;
	}
	
	
	getch();
	return 0;
}
