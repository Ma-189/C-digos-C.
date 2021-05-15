#include<stdio.h>
#include<conio.h>

int main()
{
    int A,B,C;
    printf(" Entre com o valor de A:");
    scanf("%i", &A);
    printf("Entre com o valor de B:");
    scanf("%i", &B);
    C=A;
    A=B;
    B=C;
    printf("O valor de A eh: %i",A);
    printf("O valor de B eh: %i",B);
    
    getch();
    return 0;
}
