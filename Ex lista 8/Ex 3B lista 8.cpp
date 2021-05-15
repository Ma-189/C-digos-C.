#include<stdio.h>
#include<conio.h>

    int Matriz_A(int x, int *a);
    int Matriz_B(int x, int *b);
	int Juncao_matrizes(int x, int *a, int *b, int y, int *c);
	int Exibicao(int y, int *c);
	int i;
	
    int main()
	{
	int a[30], b[30], c[60], x=30, y=60;
	Matriz_A(30, a);
	Matriz_B(30, b);
	Juncao_matrizes(30, a, b, 60, c);
	Exibicao(60, c);}
	   
	   
	int Matriz_A(int x, int *a){
    
	for(i=0; i<x; ++i){
	printf("Digite os valores do vetor A: \n");
	scanf("%i", &a[i]);}}
	
	int Matriz_B(int x, int *b){
	
    for(i=0; i<x; ++i){
	printf("Digite os valores do vetor B: \n");
	scanf("%i", &b[i]);}}
	
	int Juncao_matrizes(int x, int *a, int *b, int y, int *c){
	
	for(i=0; i<60; ++i){
	if (i<x)
	{c[i]=a[i];}
	else
    c[i]=b[i-x];}}
	
	int Exibicao(int y, int *c){
	
	for(i=0; i<y; ++i){
	printf("C: %i\n", c[i]);}}

