#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

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
                system("pause");
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

    char marcaNome[5][20] = {"TonerHP.txt", "TonerBrother.txt", "TonerSamsung.txt"};

    FILE *arquivoLeitura;
    arquivoLeitura = fopen (marcaNome[*pMenu-1], "r");

    if(arquivoLeitura == NULL)
    {
        printf("O arquivo não existe e está sendo criado...\n");
        printf("Arquivo criado com sucesso!\n");
        arquivoLeitura = fopen(marcaNome[*pMenu-1], "w");
        Sleep(1500);
        system("cls");
     }else
     {
        printf("teste");
        *pMenu = 1;
        main();
     }
}
