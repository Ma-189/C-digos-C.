#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B, C;
	printf("Digite 3 valores para os lados de um triangulo: ");
	scanf("%f %f %f", &A,&B,&C);
	if ((A<B+C)&&(B<A+C)&&(C<A+B)){
	if ((A==B)&&(B==C))
	printf("Estes valores formam um triangulo equilatero");
	else
	{if ((A==B)||(A==C)||(B==C))
	printf("Estes valores formam um triangulo isosceles");
	else
	printf("Estes valores formam um triangulo escaleno");}}
    else
	{printf("Estes valores nao formam um triangulo");}

	getch();
	return 0;
}
