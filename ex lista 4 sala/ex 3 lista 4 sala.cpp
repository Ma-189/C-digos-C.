#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], i, c[5];
	for(i=0; i<5; ++i)
	{printf("Entre com os valores dos vetores: \n");
	scanf("%i %i", &a[i], &b[i]);}
	for(i=0; i<5; ++i)
	{c[i]=(a[i]-b[i]);
	printf("a:%i\n b:%i\n c:%i\n", a[i], b[i], c[i]);}
	
	getch();
	return 0;
}
