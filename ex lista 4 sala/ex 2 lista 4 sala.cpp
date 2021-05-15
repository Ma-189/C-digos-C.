#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6], b[6], i, m;
	for(i=0; i<6; ++i)
	{printf("Entre com os valores do vetor: \n");
	scanf("%i", &a[i]);}
	for(i=0; i<6; ++i)
	{
	b[i]=1;
		for(m=a[i]; m>0; --m)
	b[i]=b[i]*m;
	printf("a:%i\n b:%i\n", a[i], b[i]);
	}
	
	getch();
	return 0;
}
