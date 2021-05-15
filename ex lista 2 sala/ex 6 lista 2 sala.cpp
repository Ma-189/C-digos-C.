#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

	float A, B, C, x1, x2, delta;
	printf("Equacao do segundo grau! \n ");
	printf("Digite o coeficiente A: \n");
	scanf("%f", &A);
	printf("Digite o coeficiente B: \n");
	scanf("%f", &B);
	printf("Digite o coeficiente C: \n");
	scanf("%f", &C);
	if (A!=0){
		delta=(pow(B,2)-(4*A*C));
		if (delta<0)
		printf("A equacao nao tem solucao");
	else 
	    if (delta==0){
	    x1=((-B)/2*A);
	    x2=x1;
		printf("A equacao tem duas raizes reais e iguais: %f %f \n", x1, x2);}
	else{
	    x1=(-B+sqrt(delta))/2*A;
	    x2=(-B-sqrt(delta))/2*A;
	    printf("A equacao tem duas raizes reais e diferentes: %f %f \n", x1, x2);}
	}
	else
	    printf("Nao eh uma equacao do segundo grau");
	
	getch();
	return 0;
}
