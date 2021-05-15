#include<stdio.h>
#include<conio.h>

int main()
{
	float AP, LP, AA, LA, r1, r2;
	printf("Digite a largura do azulejo(cm): ");
	scanf("%f", &LA);
	printf("Digite a altura do azulejo(cm): ");
	scanf("%f", &AA);
	printf("Digte a largura da parede(m): ");
	scanf("%f", &LP);
	printf("Digite a altura daparede(m): ");
	scanf("%f", &AP);
	LA=LA/100;
	AA=AA/100;
	r1=LA*AA;
	r2=LP*AP;
	r2=r2/r1;
	printf("A quantidade de azulejos necessaria eh: %f", r2);
	
	getch();
	return 0;
	
	
}
