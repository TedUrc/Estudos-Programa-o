soma = 0
multiplicacao = 1
try:
    primeiro_numero = int(input("Digite o primeiro número: "))
    segundo_numero = int(input("Digite o segundo número: "))
except ValueError:
    print("\03331[mERRO: Informe um número inteiro!\033[m")
else:
    for contador in range(primeiro_numero+1, segundo_numero):
        if not contador % 2:
            soma += contador
        else:
            multiplicacao *= contador
    multiplicacao *= primeiro_numero * segundo_numero
    soma += primeiro_numero + segundo_numero 
    print(f"Soma dos números pares e os digitados: {soma}")
    print(f"Multiplicação dos números ímpares e os digitados: {multiplicacao}")
