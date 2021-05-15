#include<stdio.h>
#include<conio.h>
#include<string.h>

int cadastro=0;   
    struct alunos{
    char nome[60];
	float nota1, nota2, media;};
    struct alunos x[3];
    int i, j;
    int Cadastros_alunos();
    int Classificacao_alfabetica();
    int Alteracao_cadastro();
    int Pesquisa_alunos();
    int Alunos_aprovados();
	int Alunos_reprovados();
int main()
{
        while(cadastro!=7){
            	
        printf("\n1- Cadastros dos alunos\n2- Classificacao alfabetica\n3- Alteracao do cadastro\n4- Pesquisa dos alunos\n5- Alunos aprovados\n6- Alunos reprovados\n7- Sair\n\nDigite a opcao desejada: ");
        scanf("%i", &cadastro);
                
        switch(cadastro){
            case 1: Cadastros_alunos(); break;
            case 2: Classificacao_alfabetica(); break;
            case 3: Alteracao_cadastro(); break;
            case 4: Pesquisa_alunos(); break;
            case 5: Alunos_aprovados(); break;
			case 6: Alunos_reprovados(); break;}}
            return (0);}
            	
            int Cadastros_alunos()
            {
            for(i=0; i<=2; ++i)
            {fflush(stdin);
            printf("Nome do aluno: ");
            fgets(x[i].nome, 60, stdin);
            printf("Nota 1: ");
			scanf("%f", &x[i].nota1);
			printf("Nota 2: ");
			scanf("%f", &x[i].nota2);
			x[i].media=(x[i].nota1+x[i].nota2)/2;
			printf("Media: %.2f\n", x[i].media);}
            printf("\nCadastro realizado!\n");}
                
            int Classificacao_alfabetica()
            {
            struct alunos aux;
            for (i=0; i<=1; ++i)
            for (j=i+1; j<=2; ++j)
            if (strcmp(x[i].nome,x[j].nome)>0)
            {aux=x[i];
            x[i]=x[j];
            x[j]=aux;}
            for (i=0; i<=2; ++i)
            printf("\n%s\n", x[i].nome);}

                
            int Alteracao_cadastro()
            {
            char n[60];
            printf("Digite o nome cadastrado para realizar a alteracao: ");
            fflush(stdin);
            fgets(n, 60, stdin);
            for(i=0; i<=2; ++i)
            {if(strcmp(n, x[i].nome)==0)
            {
            break;
            }}
            printf("\nDigite seus dados para o novo cadastro: ");
            fflush(stdin);
            printf("\nNome do aluno: ");
            fgets(x[i].nome, 60, stdin);
            printf("Nota 1: ");
            scanf("%f", &x[i].nota1);
            printf("Nota 2: ");
            scanf("%f", &x[i].nota2);
            x[i].media=(x[i].nota1+x[i].nota2)/2;
			printf("Media: %.2f\n", x[i].media);
            printf("\nCadastro alterado!\n");}
            
            int Pesquisa_alunos()
            {
            char n[60];
            printf("Digite o nome cadastrado: ");
            fflush(stdin);
            fgets (n, 60, stdin);
            for(i=0; i<=2; ++i)
            {if(strcmp(n,x[i].nome)==0)
            printf("\nO nome %s foi encontrado na posicao %i\n", n,i);}}
            
            int Alunos_aprovados()
            {
            for(i=0; i<=2; ++i)
            if(x[i].media>=7.0)
            {printf("\nNome: %sMedia: %.2f\n", x[i].nome, x[i].media);}}
            
            int Alunos_reprovados()
            {
            for(i=0; i<=2; ++i)
			if(x[i].media<7.0)
            {printf("\nNome: %sMedia: %.2f\n", x[i].nome, x[i].media);}
			getch();}
            
