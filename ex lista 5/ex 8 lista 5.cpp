#include<stdio.h>
#include<conio.h>

int main()
{
	float a[40], x, pesq, acha=0;
	int i, j;
	for(i=0; i<=39; ++i)
	{printf("Entre com as notas dos alunos: \n");
	scanf("%f", &a[i]);}
	for(i=0; i<=38; ++i)
	for(j=i+1; j<=39; ++j)
	{if (a[i]>a[j])
	{x=a[i];
	a[i]=a[j];
	a[j]=x;}}
	for(i=0; i<=39; ++i){
	printf("%.1f\n", a[i]);}
	
	printf("Entre com a nota que deseja pesquisar: \n");
	scanf("%f", &pesq);
	for(i=0; i<=39; ++i)
	{if((pesq==a[i]) && (acha==0))
	{acha=1;
	break;}}
	if (acha==1)
	printf("achou %.1f na posicao %i", pesq, i);
	else 
	printf("Numero nao encontrado");
	
	getch();
	return 0;
}
