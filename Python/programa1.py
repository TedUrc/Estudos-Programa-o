contador = 0
try:
    numeroSequencia = int(input("Informe um numero: "))
except ValueError:
    print("\033[31mERRO: Informe um número inteiro!\033[m")
else:
    while numeroSequencia:
        if not numeroSequencia % 2:
            contador += 1
        numeroSequencia -= 1
    print(f"Contador: {contador}")
