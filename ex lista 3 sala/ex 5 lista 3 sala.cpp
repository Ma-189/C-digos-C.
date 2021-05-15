#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	for (a=1; a<200; ++a)
	if (a%4==0)
	printf("%i\n", a);
	
	getch();
	return 0;
}
