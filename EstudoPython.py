# 1) Crie um programa que receba cinco números inteiros e os imprima na ordem inversa em que foram digitados. Dica: armazene os números em uma lista.

# 2) Escreva um programa que solicita as dimensões (largura e comprimento) de uma sala em metros, o tamanho da aresta de uma peça quadrada de cerâmica em CM e o preço do metro quadrado
# da referida cerâmica; imprima quantos metros quadrados devem ser adquiridos para pavimentar a referida sala e descubra quanto custará a cerâmica a ser usada.

# 3) Crie um programa que pedirá a cotação do dólar do dia, uma quantidade de reais e exibirá o valor convertido para dólares. Aproveite para formatar os dados com os símbolos de R$ e US$
# e colocar duas casas decimais no resultado.


################################################################# 1 #################################################################

#numero1 = int(input("Digite o primeiro número: "))
#numero2 = int(input("Digite o segundo número: "))
#numero3 = int(input("Digite o terceiro número: "))
#numero4 = int(input("Digite o quarto número: "))
#numero5 = int(input("Digite o quinto número: "))

#numeros = [numero1, numero2, numero3, numero4, numero5]

#print("Você digitou os números: ", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4])
#print("A ordem inversa dos números é essa: ", numeros[4], numeros[3], numeros[2], numeros[1], numeros[0])
################################################################# 2 #################################################################

#largura = float(input("Digite a largura da sala em Metro: "))
#comprimento = float(input("DIgite o comprimento da sala em Metro: "))
#aresta_ceramica = float(input("Digite o tamanho da aresta da cerâmica em CM: "))
#preco_metro_quadrado = float(input("Digite o preço do metro quadrado da cerâmica: "))
################################################################# 3 #################################################################

dolar_dia = float(input("Digite a cotação do dólar atual: "))
converter = float(input("Digite a quantidade de Reais que deseja converter para dólar: "))

resultado = converter / dolar_dia

print("O valor convertido em dólar fica: ", resultado)
print(f"O valor convertido em dólar fica: %.2f", resultado)