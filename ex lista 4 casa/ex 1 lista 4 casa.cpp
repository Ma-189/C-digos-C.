#include<stdio.h>
#include<conio.h>

int main()
{
	int RAC[9], RAV[9], i;
	for(i=0; i<9; ++i)
	{printf("Entre com os valores do RA: \n");
	scanf("%i", &RAV[i]);}
	RAC[0]=RAV[0];
	RAC[1]=RAV[1];
	RAC[2]=RAV[7];
	RAC[3]=RAV[6];
	RAC[4]=RAV[4];
	RAC[5]=RAV[5];
	RAC[6]=RAV[2];
	RAC[7]=RAV[3];
	RAC[8]=RAV[8];
	for(i=0; i<9; ++i)
	printf("%i", RAC[i]);
	
	getch();
	return 0;
}
