#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

#define tamanhoString 20
#define countItens 3

int  menu = 1;
int *pMenu = &menu;
char *resultados;
char leituraItens[tamanhoString];
char marcaNome[countItens][tamanhoString] = {"TonerHP.txt", "TonerBrother.txt", "TonerSamsung.txt"};
char exibirMarca[countItens][tamanhoString] = {"Toner HP", "Toner Brother", "Toner Samsung"};

FILE *arquivoLeitura, *arquivoEscrita;    

void listToner();
void regToner();

int main()
{
    while (*pMenu != 0)
    {
        setlocale(LC_ALL, "");
        printf("-----------------------------------------\n");
        printf("[Menu Principal]\n");
        printf("-----------------------------------------\n");
        printf("[1]HP\n");
        printf("[2]Brother\n");
        printf("[3]Samsung\n");
        printf("[0]Sair\n");
        printf("O que deseja fazer? ");
        scanf("%d", &*pMenu);

        switch (*pMenu)
        {
            case 0:
                exit(1);
                break;
            case 1:
                listToner();
                *pMenu = 0;
                break;
            case 2:
                regToner();
                *pMenu = 0;
                break;
            case 3:
                listToner();
                *pMenu = 0;
                break;          
            default:
                break;
        }       
    }    
}

//Função para cadastrar produto
void regToner()
{   
    //Define o idioma padrão do sistema.
    setlocale(LC_ALL, "");
    
    int continueCad;
    char produtoEspec[2][20];
    
    // Abrir o arquivo da respectiva marca escolhida para escrita.
    arquivoEscrita = fopen(marcaNome[*pMenu-1], "a");

     //Se o arquivo não existir, ele será criado.
    if(arquivoEscrita == NULL)
    {
        arquivoEscrita = fopen(marcaNome[*pMenu-1], "w");
        fclose(arquivoEscrita);
        main();        
    }

     //Caso o arquivo já exista, opções para cadastro serão exibidas na tela.
    else
    {
        system("cls");
        printf("-----------------------------------------\n");
        printf("Cadastrar Toner\n");
        printf("-----------------------------------------\n");

        printf("Digite o nome do produto: ");
        fflush(stdin);
        scanf("%[^\n]", &produtoEspec[0]);

        printf("Digite o valor do produto: ");
        fflush(stdin);
        scanf("%[^\n]", &produtoEspec[1]);

        //Concatena o nome do produto e valor já incluindo o R$ e quebra de linha ao final.
        strcat(produtoEspec[0], " - R$");
        strcat(produtoEspec[0], produtoEspec[1]);
        strcat(produtoEspec[0], "\n");

        //Insere os valores no arquivo TXT da marca escolhida e fecha o arquivo.
        fputs(produtoEspec[0], arquivoEscrita);
        fclose(arquivoEscrita);

        printf("Deseja continuar cadastrando algum produto? [1] Sim | [0]Não: ");
        scanf("%d", &continueCad);

        (continueCad == 1) ? regToner() : main();
    }
}

//Listar os preços cadastrados para cada marca.
void listToner()
{      
    //Define o idioma padrão do sistema.
    setlocale(LC_ALL, "");

    // Abrir o arquivo da respectiva marca escolhida para leitura apenas.
    arquivoLeitura = fopen (marcaNome[*pMenu-1], "r"); 

    //Se o arquivo não existir, ele será criado.
    if(arquivoLeitura == NULL)
    {
        arquivoEscrita = fopen(marcaNome[*pMenu-1], "w");
        fclose(arquivoEscrita);
        main();        
    }
    
    //Caso o arquivo já exista, a lista de todos os produtos cadastrados serão exibidos na tela.
    else
    {
        system("cls");
        printf("-----------------------------------------\n");
        printf("[%s]\n", exibirMarca[*pMenu-1]);
        printf("-----------------------------------------\n");

        //Verifica e continua imprimindo os valores na tela até o arquivo chegar ao fim.
        while(!feof(arquivoLeitura))
        {
            resultados = fgets(leituraItens, tamanhoString, arquivoLeitura);
            if(resultados)
            {   
                printf("%s", leituraItens);
            }
        }

        system("pause");
        system("cls");
        fclose(arquivoLeitura);
        main();
    }
}
