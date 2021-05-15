#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], i, j, x;
	for(i=1; i<=12; ++i)
	{printf("Entre com os valores do vetor para serem ordenados: \n");
	scanf("%i", &a[i]);}
	for(i=1; i<=11; ++i)
	for(j=i+1; j<=12; ++j)
	if (a[i]<a[j]){
		{x=a[i];
		a[i]=a[j];
		a[j]=x;}
	}
	for(i=1; i<=12; ++i)
	printf("%i\n", a[i]);
	
	
	getch();
	return 0;
}
