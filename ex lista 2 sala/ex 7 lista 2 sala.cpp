#include<stdio.h>
#include<conio.h>

int main()
{
	int N, X;
	printf("Digite o valor de N: ");
	scanf("%i", &N);
	if (N<0){
		X=(N*-1);}
	else{
	X=N;}
	printf("O valor do modulo desse numero eh: %i", X);
	
	getch();
	return 0;
}
