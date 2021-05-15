#include<stdio.h>
#include<conio.h>

int main()
{
	int A[5], B[5], i;
	for(i=0; i<5; ++i)
	{printf("Entre com os valores do vetor: \n");
	scanf("%i", &A[i]);}
	for(i=0; i<5; ++i)
	{B[i]=A[i]*3;
	printf("A: %i\nB: %i\n", A[i], B[i]);}

    getch();
    return 0;
}
