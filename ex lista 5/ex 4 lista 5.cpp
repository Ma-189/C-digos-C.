#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], b[12], c[12], i, j, x;
	for(i=0; i<=11; ++i)
	{printf("Entre com os valores do vetor A: \n");
	scanf("%i", &a[i]);}
	for(i=0; i<=10; ++i)
	{for(j=i+1; j<=11; ++j)
	{if (a[i]>a[j])
	{x=a[i];
	a[i]=a[j];
	a[j]=x;
	}}}
	for(i=0; i<=11; ++i)
	printf("%i\n", a[i]);
	for(i=0; i<=11; ++i)
	{printf("Entre com os valores do vetor B: \n");
	scanf("%i", &b[i]);}
	for(i=0; i<=10; ++i)
	{for(j=i+1; j<=11; ++j)
	{if (b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	b[j]=x;}}}
	for(i=0; i<=11; ++i)
	printf("%i\n", b[i]);
	printf("Os valores de C sao: ");
	for(i=0; i<=11; ++i){
	c[i]=a[i]+b[i];}
	for(i=0; i<=10; ++i)
	{for(j=i+1; j<=11; ++j)
	{if(c[i]>c[j])
	{x=c[i];
	c[i]=c[j];
	c[j]=x;}}}
	for(i=0; i<=11; ++i){
	printf("%i\n", c[i]);}
	
	getch();
	return 0;
}
