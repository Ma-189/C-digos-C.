#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[20], i, acha=0, pesq;
	for(i=0; i<=19; ++i)
	{printf("Entre com os valores do vetor: \n");
	scanf("%i", &a[i]);}
	for(i=0; i<=19; ++i){
	b[i]=a[i]+2;
	printf("b: %i\n", b[i]);}
	
	printf("Entre com o numero que deseja pesquisar: \n");
	scanf("%i", &pesq);
	for(i=0; i<=29; ++i)
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
