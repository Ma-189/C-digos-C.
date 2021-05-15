#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i, j, x;
	for (i=0; i<=19; ++i)
	{printf("Entre com os valores do vetor a: \n");
	scanf("%i", &a[i]);}
	for (i=0; i<=29; ++i)
	{printf("Entre com os valores do vetor b: \n");
	scanf("%i", &b[i]);}
	for(i=0; i<=49; ++i)
	if (i<20)
	c[i]=a[i];
	else
	if (i<50){
	c[i]=b[i-20];}
	for(i=0; i<=48; ++i)
	{for(j=i+1; j<=49; ++j)
	{if (c[i]<c[j])
	{x=c[i];
	c[i]=c[j];
	c[j]=x;
	}}}
	for(i=0; i<=49; ++i){
	printf("c: %i\n", c[i]);}
	
	getch();
	return 0;
}

	
