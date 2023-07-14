#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

#define tamanhoString 20
#define countItens 3

int  menu = 1;
int *pMenu = &menu;

void listToner();

int main()
{
    while (*pMenu != 0)
    {
        setlocale(LC_ALL, "");
        printf("------------------------------------\n");
        printf("----------[Menu Principal]----------\n");
        printf("------------------------------------\n");
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
                listToner(*pMenu);
                *pMenu = 0;
                break;
            case 2:
                listToner(*pMenu);
                *pMenu = 0;
                break;
            case 3:
                listToner(*pMenu);
                *pMenu = 0;
                break;          
            default:
                break;
        }       
    }    
}

void listToner()
{   
    setlocale(LC_ALL, "");

    char *resultados;
    char leituraItens[tamanhoString];
    char marcaNome[countItens][tamanhoString] = {"TonerHP.txt", "TonerBrother.txt", "TonerSamsung.txt"};

    FILE *arquivoLeitura, *arquivoEscrita;    
    arquivoLeitura = fopen (marcaNome[*pMenu-1], "r");

    if(arquivoLeitura == NULL)
    {
        printf("O arquivo não existe e está sendo criado...\n");
        printf("Arquivo criado com sucesso!\n");
        printf("Você será redirecionado para o Menu Principal\n");
        arquivoEscrita = fopen(marcaNome[*pMenu-1], "w");

        Sleep(1500);
        system("cls");
        main();
     }
     
     else
     {
        system("cls");
        printf("------------------------------------\n");
        printf("-------------[Toner HP]-------------\n");
        printf("------------------------------------\n");
        
        while(!feof(arquivoLeitura))
        {
            resultados = fgets(leituraItens, tamanhoString, arquivoLeitura);
            if(resultados)
            {   
                printf("%s", leituraItens);
            }
        }
        
        fclose(arquivoLeitura);
        system("pause");
        main();
     }
}
