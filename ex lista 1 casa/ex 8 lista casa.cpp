#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, n4, media;
	printf("Digite a nota do primeiro bimestre: ");
	scanf("%f", &n1);
	printf("Digite a nota do segundo bimestre: ");
	scanf("%f", &n2);
	printf("Digite a nota do terceiro bimestre: ");
	scanf("%f", &n3);
	printf("Digite a nota do quarto bimestre: ");
	scanf("%f", &n4);
	media=(n1+n2+n3+n4)/4;
	printf("A media final eh: %f", media);
	
	getch();
	return 0;
}
