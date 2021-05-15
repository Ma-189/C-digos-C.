#include<stdio.h>
#include<conio.h>

int main()
{
	int a[4], b[4], c[4][2], i, j;
	for(i=0; i<=3; ++i)
	{printf("Entre com os valores do vetor a: \n");
	scanf("%i", &a[i]);}
	for(i=0; i<=3; ++i)
	{printf("Entre com os valores do vetor b: \n");
	scanf("%i", &b[i]);}
	for(i=0; i<=3; ++i)
	for(j=0; j<=1; ++j)
	{c[i][0]=a[i]*2;
	c[i][1]=b[i]-5;}
	for(i=0; i<=3; ++i)
	for(j=0; j<=1; ++j)
	{printf("Os valores de c sao: [%i][%i]\n", i, c[i][j]);}
	
	getch();
	return 0;
}
