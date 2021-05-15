#include<stdio.h>
#include<conio.h>

int soma(int a);
   
   
int main()
{
	int a;
	printf("Digite o numero: ");
	scanf("%i", &a);
	soma(a);
}
    int soma(int a)
    {int x, y=0;
    {for(x=1; x<=a; ++x)
	y=x+y;}
	printf("%i\n", y);
    getch();
}
