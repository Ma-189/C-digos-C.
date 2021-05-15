#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i;
	for (i=0; i<20; ++i)
	{printf("Entre com os valores do vetor a: \n");
	scanf("%i", &a[i]);}
	for (i=0; i<30; ++i)
	{printf("Entre com os valores do vetor b: \n");
	scanf("%i", &b[i]);}
	for(i=0; i<50; ++i){
	if (i<20)
	c[i]=a[i];
	else
	if (i<50){
	c[i]=b[i-20];}
	printf("c: %i\n", c[i]);}
	
	getch();
	return 0;
}
