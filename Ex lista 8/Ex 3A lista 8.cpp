#include<stdio.h>
#include<conio.h>

int soma(int *a)
    {int x, y=0;
    for(x=1; x<=*a; ++x)
	y=x+y;
	printf("%i\n", y);}


int main()
{
	int *Pa, a;
	printf("Digite o numero: ");
	scanf("%i", &a);
	Pa=&a;
	soma(Pa);
	
	getch();
}
    







