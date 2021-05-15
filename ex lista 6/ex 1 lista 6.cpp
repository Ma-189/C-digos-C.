#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5][3], b[5][3], c[5][3], i, j;
	for(i=1; i<=5; ++i)
	for(j=1; j<=3; ++j)
	{printf("Entre com os valores do vetor a: \n");
	scanf("%i", &a[i][j]);
	printf("Entre com os valores do vetor b: \n");
	scanf("%i", &b[i][j]);
	c[i][j]=a[i][j]+b[i][j];}
	for(i=1; i<=5; ++i)
	for(j=1; j<=3; ++j)
	{printf("O vetor c eh: %i\n", c[i][j]);}
	
	getch();
	return 0;
}
