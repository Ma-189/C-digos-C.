#include<stdio.h>
#include<conio.h>

int main()
{
	float espaco, tempo, vm, espaco_final, espaco_inicial, tempo_final, tempo_inicial;
	printf("Digite o espaco inicial do corpo: ");
	scanf("%f", &espaco_inicial);
	printf("Digite o espaco final do corpo: ");
	scanf("%f", &espaco_final);
	printf("Digite o tempo inicial do corpo: ");
	scanf("%f", &tempo_inicial);
	printf("Digite o tempo final do corpo: ");
	scanf("%f", &tempo_final);
	tempo=tempo_final-tempo_inicial;
	espaco=espaco_final-espaco_inicial;
	vm=espaco/tempo;
    printf("A velocidade media eh: %f", vm);
	
	getch();
	return 0;
}
