#Faça uma lista de compras com listas
#O usuário deve ter a possibilidade de inserir, apagar e listar valores da sua lista
#Não permita que o programa quebre com erros de índices inexistentes na lista
import os

listaCompras = []

while(True):
    print("O que deseja fazer?")
    opcao = input("[i]nserir, [a]pagar ou [l]istar: ")
    
    if (opcao == 'i'):
        os.system("cls")
        inserir = input("Valor: ")
        listaCompras.append(inserir)
        
    elif (opcao == 'a'):
        os.system("cls")        
        apagar = input("Qual índice deseja deletar da lista? ")
                
        try:
            apagar = int(apagar)
            del listaCompras[apagar]        
        except ValueError:
            print("Digite um valor de número inteiro")            
        except IndexError:
            print("O índice digitado não existe na lista")            
        except:
            print("Erro desconhecido")

    elif(opcao == 'l'):
        os.system("cls")
        if (len(listaCompras) == 0):
            print("Não há nada na lista")
        else:            
            for i, nome in enumerate(listaCompras):
                print(i, nome)
                
    else:
        os.system("cls")
        print("Essa opção não existe! Tente novamente.")