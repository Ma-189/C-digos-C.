#include<stdio.h>
#include<conio.h>

int main()
{
	float PrestacaoAtraso, PrestacaoValor, Taxa, Tempo;
	printf("Digite o valor da prestacao: ");
	scanf("%f" , &PrestacaoValor);
	printf("Digite o valor da taxa de juros: ");
	scanf("%f", &Taxa);
	printf("Digite o tempo em atraso: ");
	scanf("%f", &Tempo);
	PrestacaoAtraso=PrestacaoValor+(PrestacaoValor*(Taxa/100)*Tempo);
	printf("O valor da prestacao em atraso eh: %f" , PrestacaoAtraso);
	
	
	getch();
	return 0;
}
