#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8], b[8], i, j, x, c, acha=0, pesq;
	for(i=0; i<=7; ++i)
	{printf("Entre com os valores do vetor: \n");
	scanf("%i", &a[i]);
	c=a[i]*5;
	b[i]=c;}
	for(i=0; i<=6; ++i)
	{for(j=i+1; j<=7; ++j)
	{if(b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	x=b[i];
	}}}
	for(i=0; i<=7; ++i){
	printf("%i\n", b[i]);}
	
	printf("Entre com o numero que deseja pesquisar: \n");
	scanf("%i", &pesq);
	for(i=0; i<=7; ++i)
	{if((pesq==b[i]) && (acha==0))
	{acha=1;
	break;}}
	if (acha==1)
	printf("achou %i na posicao %i", pesq, i);
	else 
	printf("Numero nao encontrado");
	
	getch();
	return 0;
}
