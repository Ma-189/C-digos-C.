#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[10], b[10][3], i, j, n, fatorial;
	for(i=0; i<=9; ++i)
	{printf("Entre com os valores do vetor a: \n");
	scanf("%i", &a[i]);}
	for (i=0; i<=9; ++i)
	for(j=0; j<=2; ++j)
	{if (j<3){
	b[i][j]=pow(a[i],2);}
	if (j<2)
	{fatorial=1;
	n=a[i];
	while (n>1){
	fatorial*=n;
	--n;}
	b[i][j]=fatorial;}
	if (j<1){
    b[i][j]= a[i]+5;}}
	for(i=0; i<=9; ++i)
	for(j=0; j<=2; ++j)
	{printf("Os valores de b sao: [%i][%i]\n", i, b[i][j]);}
	
	getch();
	return 0;
}
