#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, media, nota_exame, nova_media;
	printf("Digite a 1ª nota: ");
	scanf("%f", &n1);
	printf("Digite a 2ª nota: ");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	if (media>=6)
	{printf("APROVADO com media: %f", media);}
	else
	printf("Digite a nota do exame: ");
	scanf("%f", &nota_exame);
	nova_media=(nota_exame+media);
	if (nova_media>=5)
	{printf("APROVADO em exame com media: %f", nova_media);}
	else
	{printf("REPROVADO em exame com media: %f", nova_media);}
	
	getch();
	return 0;
}
