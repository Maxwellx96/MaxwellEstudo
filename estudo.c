#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    
    //Criar um algoritmo para ler duas notas e mostrar a m�dia entre elas.
    float notaA, notaB;

    printf("Digite a primeira nota: ");
    scanf("%f %f", &notaA, &notaB);

    printf("\nA m�dia entre das notas �: %.2f", (notaA + notaB) / 2);
}