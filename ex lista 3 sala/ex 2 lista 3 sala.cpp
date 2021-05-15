#include<stdio.h>
#include<conio.h>

int main()
{
	int a, soma=0;
	for (a=1; a<=100; ++a){
	soma=soma+a;
	printf("%i\n", a);}
	printf("\n\n");
	printf("Soma dos numeros: %i", soma);

	getch();
	return 0;
}
