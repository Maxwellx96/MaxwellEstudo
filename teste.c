#include <stdio.h>
#include <stdlib.h>

#define tamanho 51

struct Produtos
{
    float valorProduto;
    char nomeProduto[tamanho];
};

struct Produtos cadProduto;

int op, menu = 1;

void marcaHP();

void main()
{
    while(menu != 0)
    {
        printf("--------------------------\n");
        printf("----------[Menu]----------\n");
        printf("--------------------------\n\n");
        printf("[1] HP\n");
        printf("[2] Brother\n");
        printf("[3] Samsung\n");
        printf("[0] Sair\n");
        printf("Escolha o que deseja fazer: ");

        scanf("%d", &op);

        switch (op)
        {
        case 0:
            system("exit");
            break;
        case 1:
            menu = 0;
            marcaHP();
        default:
            break;
        }
    }
}

void marcaHP()
{
    int tonerOP;
    printf("Deseja cadastrar [1], listar [2] ou buscar [3]? \n");
    scanf("%d", &tonerOP);

    if(tonerOP == 1)
    {
        printf("Digite o valor do produto: ");
        scanf("%f", &cadProduto.valorProduto);
        printf("Digite o nome do produto: ");
        scanf("%[^\n]", cadProduto.valorProduto);

    }else
    {
        FILE *arq;
        char Linha[100];
        char *result;

        system("cls");

        // Abre um arquivo TEXTO para LEITURA
        arq = fopen("TonerHP.txt", "rt");

        if (arq == NULL)  // Se houve erro na abertura
        {
            printf("Problemas na abertura do arquivo\n");
            return;
        }

        while (!feof(arq))
        {
        // Lê uma linha (inclusive com o '\n')
            result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
            if (result)  // Se foi possível ler
            printf("%s", Linha);
        }
        fclose(arq);
    }
}