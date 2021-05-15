#include<stdio.h>
#include<conio.h>

    float Prestacao(float PrestacaoAtraso, float *PrestacaoValor, float *Taxa, float *Tempo)
	{PrestacaoAtraso=*PrestacaoValor+(*PrestacaoValor*(*Taxa/100)**Tempo);
	printf("O valor da prestacao em atraso eh: %.2f" , PrestacaoAtraso);}


int main()
{
	float *mPrestacaoValor, PrestacaoValor, *mTaxa, Taxa, *mTempo, Tempo;
	float PrestacaoAtraso;
	
	printf("Digite o valor da prestacao: ");
	scanf("%f" , &PrestacaoValor);
	printf("Digite o valor da taxa de juros: ");
	scanf("%f", &Taxa);
	printf("Digite o tempo em atraso: ");
	scanf("%f", &Tempo);
	mPrestacaoValor= &PrestacaoValor;
	mTaxa= &Taxa;
	mTempo= &Tempo;
	Prestacao(PrestacaoAtraso, mPrestacaoValor, mTaxa, mTempo);
	
getch();
return 0;
}
