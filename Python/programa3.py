vetor_lista = list()

for contador in range(1, 11):
    try:
        informe_vetor = int(input(f"Informe o {contador}º número: "))
    except ValueError:
        print("\033[31mERRO: Informe um número inteiro!\033[m")
    else:
        vetor_lista.append(informe_vetor)

print(f"\nNão Ordenação: {vetor_lista}")

for comparacao in range(0, len(vetor_lista)):
    for sort in range(0, len(vetor_lista) - comparacao - 1):
        if vetor_lista[sort] > vetor_lista[sort + 1]:
            auxiliar = vetor_lista[sort]
            vetor_lista[sort] = vetor_lista[sort + 1]
            vetor_lista[sort + 1] = auxiliar

print(f"Ordenação: {vetor_lista}")
