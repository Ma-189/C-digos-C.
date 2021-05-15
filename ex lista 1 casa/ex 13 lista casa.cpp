#include<stdio.h>
#include<conio.h>

int main()
{
	float s, tempo, S0, V0, A;
	S0=2.0;
	V0=2.0;
	A=10.0;
	printf("Digite o tempo (segundos): ");
	scanf("%f", &tempo);
	s=(S0+V0)*tempo+((1/2)*A*(tempo*tempo));
	printf("O valor do movimento uniformemente variado eh: %f", s);
	
	getch();
	return 0;
}
