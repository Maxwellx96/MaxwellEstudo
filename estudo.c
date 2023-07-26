#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    
    //Criar um algoritmo para ler duas notas e mostrar a média entre elas.
    float notaA, notaB;

    printf("Digite a primeira nota: ");
    scanf("%f %f", &notaA, &notaB);

    printf("\nA média entre das notas é: %.2f", (notaA + notaB) / 2);
}