#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B, C;
	printf("Digite tres numeros: ");
	scanf("%f %f %f", &A, &B, &C);
	if ((A<B)&&(A<C)&&(B<C)){
		printf("Os valores em ordem crescente sao: %f %f %f", A, B, C);
	}
	else
	if ((A<B)&&(A<C)&&(C<B)){
		printf("OS valores em ordem crescente sao: %f %f %f", A, C, B);
	}
	else
	if ((B<A)&&(B<C)&&(A<C)){
		printf("Os valores em ordem crescente sao: %f %f %f", B, A, C);
	}
	else
	if ((C<A)&&(C<B)&&(A<B)){
		printf("Os valore em ordem crescente sao: %f %f %f", C, A, B);
	}
	else
	printf("Os valores em ordem crescente sao: %f %f %f", C, B, A);
	
	getch();
	return 0;
}
