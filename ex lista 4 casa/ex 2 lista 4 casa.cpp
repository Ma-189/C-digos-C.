#include<stdio.h>
#include<conio.h>

int main()
{
	int RAI[9], RAN[9], i;
	for(i=0; i<9; ++i)
	{printf("Entre com os valores do RA: \n");
	scanf("%i", &RAI[i]);}
	RAN[0]=RAI[0];
	RAN[1]=RAI[1];
	RAN[2]=RAI[2];
	RAN[3]=RAI[3];
	RAN[4]=RAI[4];
	RAN[5]=RAI[8];
	RAN[6]=RAI[7];
	RAN[7]=RAI[6];
	RAN[8]=RAI[5];
	for (i=0; i<9; ++i)
	{printf("%i", RAN[i]);}
	
	getch();
	return 0;
}
