#Faça uma lista de compras com listas
#O usuário deve ter a possibilidade de inserir, apagar e listar valores da sua lista
#Não permita que o programa quebre com erros de índices inexistentes na lista

listaCompras = []

while(True):
    print("O que deseja fazer?")
    op = input("[i]nserir, [a]pagar ou [l]istar: ")
    
    if(op == 'i'):
        inserir = input("Valor: ")
        listaCompras.append(inserir)
        
    if(op == 'a'):
        apagar = int(input("Qual índice deseja deletar da lista? "))
        
        try:
            listaCompras.pop(apagar)
        except:
            print("O índice que tentou deletar não existe!")

    if(op == 'l'):
        for indice, nome in enumerate(listaCompras):
            print(indice, nome)