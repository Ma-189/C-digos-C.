#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[10], i;
	for (i=0; i<5; ++i)
	{printf("Entre com os valores dos vetores: \n");
	scanf("%i %i", &a[i], &b[i]);}
	for(i=0; i<10; ++i){
	if (i<5)
	c[i]=a[i];
	else
	c[i]=b[i-5];
	printf("c: %i\n", c[i]);}
	
	getch();
	return 0;
}
