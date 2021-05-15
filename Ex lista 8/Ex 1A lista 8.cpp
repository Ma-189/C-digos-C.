#include<stdio.h>
#include<conio.h>
#include<string.h>

    int menu=0;   
    struct age{
    char nome[60], endereco[60], email[60], telefone[9];};
    struct age x[5];
    int i, j;
    int Cadastros_e_registros();
    int Pesquisa_de_registros();
    int Classificacao_alfabetica();
    int Alteracao_de_registro();
    int Remocao_de_dados();
int main()
{
        while(menu!=6){
            	
        printf("\n1- Cadastro e registros\n2- Pesquisa de registro\n3- Classificacao alfabetica\n4- Alteracao de registro\n5- Remocao de dados\n6- Sair\n\nDigite a opcao desejada: ");
        scanf("%i", &menu);
                
        switch(menu){
            case 1: Cadastros_e_registros(); break;
            case 2: Pesquisa_de_registros(); break;
            case 3: Classificacao_alfabetica(); break;
            case 4: Alteracao_de_registro(); break;
            case 5: Remocao_de_dados(); break;}}
            return (0);}
            	
            int Cadastros_e_registros()
            {
            for(i=0; i<=4; ++i)
            {fflush(stdin);
            printf("Nome: ");
            fgets(x[i].nome, 60, stdin);
            fflush(stdin);
            printf("Endereco: ");
            fgets(x[i].endereco, 60, stdin);
            fflush(stdin);
            printf("Email: ");
            fgets(x[i].email, 60, stdin);
            printf("Telefone: ");
            scanf("%i", &x[i].telefone);}
            printf("\nCadastro realizado!\n");}
                
            int Pesquisa_de_registros()
            {
            char n[60];
            printf("Digite o nome cadastrado: ");
            fflush(stdin);
            fgets (n, 60, stdin);
            for(i=0; i<=4; ++i)
            {if(strcmp(n,x[i].nome)==0)
            printf("\nO nome %s foi encontrado na posicao %i\n", n,i);}}
                
            int Classificacao_alfabetica()
            {
            struct age aux;
            for (i=0; i<=3; ++i)
            for (j=i+1; j<=4; ++j)
            if (strcmp(x[i].nome,x[j].nome)>0)
            {aux=x[i];
            x[i]=x[j];
            x[j]=aux;}
            for (i=0; i<=4; ++i)
            printf("%s\n", x[i].nome);}
                
            int Alteracao_de_registro()
            {
            char n[60];
            printf("Digite o nome cadastrado para realizar a alteracao: ");
            fflush(stdin);
            fgets(n, 60, stdin);
            for(i=0; i<=4; ++i)
            {if(strcmp(n, x[i].nome)==0)
            {
            break;
            }}
            printf("\nDigite seus dados para o novo cadastro: ");
            fflush(stdin);
            printf("\nNome: ");
            fgets(x[i].nome, 60, stdin);
            fflush(stdin);
            printf("Endereco: ");
            fgets(x[i].endereco, 60, stdin);
            fflush(stdin);
            printf("Email: ");
            fgets(x[i].email, 60, stdin);
            printf("Telefone: ");
            fgets(x[i].telefone, 9, stdin);
            printf("\nCadastro alterado!\n");}
            
            int Remocao_de_dados()
            {
            char n[60];
            printf("\nDigite o nome para remover: ");
            fflush(stdin);
            fgets(n, 60, stdin);
            for(i=0; i<=5; ++i)
            {if(strcmp(n, x[i].nome)==0)
            break;
			}
			printf("\nTecle ENTER 4 vezes para remover o cadastro\n");
			fgets(x[i].nome, 60, stdin);
            fgets(x[i].endereco, 60, stdin);
            fgets(x[i].email, 60, stdin);
            fgets(x[i].telefone, 9, stdin);
            printf("\nCadastro deletado!\n");
			getch();}

   


