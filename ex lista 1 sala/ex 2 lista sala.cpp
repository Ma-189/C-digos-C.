#include<stdio.h>
#include<conio.h>

int main()
{
    float C, F;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &F);
    C=(((F-32)*5)/9);
    printf("O valor da temperatura em graus Celsius eh: %f" , C);
    
    getch();
    return 0;
}
