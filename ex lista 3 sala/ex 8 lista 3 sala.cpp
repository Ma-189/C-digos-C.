#include<stdio.h>
#include<conio.h>

int main()
{
	int ant=1, post=1, aux, cont=1;
	do{
		printf("%i\n", ant);
		aux=ant+post;
		ant=post;
		post=aux;
	    ++cont;}	
	while (cont<=15);
	
		getch();
		return 0;
}

