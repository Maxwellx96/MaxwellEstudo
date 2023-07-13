#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int op, menu = 1;
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
                *pMenu = 1;
                listToner(*pMenu);
                break;
            case 2:
                *pMenu = 2;
                listToner(*pMenu);
                break;
            case 3:
                *pMenu = 3;
                listToner(*pMenu);
                break;            
            default:
                break;
        }       
    }
    
}

void listToner()
{   
    setlocale(LC_ALL, "");

    FILE *arquivoLeitura;

    switch (*pMenu)
    {
        case 1:
            arquivoLeitura = fopen("TonerHP.txt", "r");
            break;
        case 2:
            arquivoLeitura = fopen("TonerBrother.txt", "r");
            break;
        case 3:
            arquivoLeitura = fopen("TonerSamsung.txt", "r");
            break;
        
        default:
            break;
    }    

    if(arquivoLeitura == NULL)
    {
        printf("O arquivo não existe e está sendo criado");
        if(*pMenu == 1){arquivoLeitura = fopen("TonerHP.txt", "w");}
        if(*pMenu == 2){arquivoLeitura = fopen("TonerBrother.txt", "w");}
        if(*pMenu == 3){arquivoLeitura = fopen("TonerSamsung.txt", "w");}                
        printf("\nArquivo criado com sucesso!\n");
    }else
    {
        
    }


}
