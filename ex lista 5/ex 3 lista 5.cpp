#include<stdio.h>
#include<conio.h>

int main()
{
	int a[15], b[15], i, m, j, x;
	for(i=1; i<=15; ++i)
	{printf("Entre com os valores do vetor: \n");
	scanf("%i", &a[i]);}
	for(i=1; i<=15; ++i)
	{b[i]=1;
		for(m=i; m>0; --m)
	b[i]=b[i]*m;
	}
	for(i=1; i<=14; ++i)
	{for(j=i+1; j<=15; ++j)
	{if (b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	b[j]=x;}}}
	for(i=1; i<=15; ++i)
	printf("%i\n", b[i]);
	
	getch();
	return 0;
}

