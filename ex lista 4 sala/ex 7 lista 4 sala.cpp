#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10], b[10], i, j;
	for(i=0; i<10; ++i)
	{printf("Entre com os valores do vetor: \n");
	scanf("%i", &a[i]);}
	j=9;
	for (i=0; i<10; ++i){
		b[i]=a[j]; --j;	
	printf("b: %i\n", b[i]);}
	
	getch();
	return 0;
	
}
