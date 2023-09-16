#Estruturas Condicionais

# 1) Em estatística, uma mediana é um valor que divide uma amostra ao meio, com os elementos menores que a mediana à esquerda desta; e os maiores, à direita. Faça um programa que solicita três 
# números inteiros ao usuário e imprime a média aritmética simples e a mediana dos três. A mediana, em muitos casos, é uma medida de tendência central mais adequada que a média, pois é menos 
# influenciada por valores extremos.

# 2) Crie um programa que solicitará ao usuário as medidas de três lados de um triângulo e informará como saída se os valores formam um triângulo retângulo. Os lados devem ser fornecidos em 
# qualquer ordem (ou seja, não “vale” escrever “digite o tamanho da hipotenusa”, “digite o tamanho do cateto 1” etc.). Dica: use o Teorema de Pitágoras (“O quadrado da hipotenusa é igual à 
# soma dos quadrados dos catetos”).

################################################################# 1 #################################################################
numero1 = int(input("Digite o primeiro número: "))
numero2 = int(input("Digite o segundo número: "))
numero3 = int(input("Digite o terceiro número: "))

resultado_mediana = [0, 0, 0]
resultado_media = (numero1 + numero2 + numero3) / 3

if numero1 < numero2 and numero1 < numero3:
    resultado_mediana[0] = numero1

elif numero1 > numero2 and numero1 < numero3:
    resultado_mediana[1] = numero1
    
elif numero1 > numero2 and numero1 > numero3:
    resultado_mediana[2] = numero1

if numero2 < numero3 and numero2 > numero1:
    resultado_mediana[1] = numero2
    
elif numero2 < numero3 and numero2 < numero1:
    resultado_mediana[0] = numero2
    
elif numero2 > numero3 and numero2 > numero1:
    resultado_mediana[2] = numero2


if numero3 > numero2 and numero3 > numero1:
    resultado_mediana[2] = numero3
    
elif numero3 > numero2 and numero3 < numero1:
    resultado_mediana[0] = numero3
    
elif numero3 < numero2 and numero3 < numero1:
    resultado_mediana[1] = numero3

print(f"A média dos números é: {resultado_media}")
print(f"A mediana dos números é: [{resultado_mediana[0]}, {resultado_mediana[1]}, {resultado_mediana[2]}] = {resultado_mediana[1]}")

################################################################# 2 #################################################################