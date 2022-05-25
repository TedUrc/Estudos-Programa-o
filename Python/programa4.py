vetor_lista = [5, 9, 2, 3, 4, 1, 7, 8, 6, 10]

for pos, valor in enumerate(vetor_lista):
    if pos == 0:
        menor = valor
        maior = valor
    else:
        if maior < valor:
            maior = valor
        elif menor > valor:
            menor = valor

print(f"Maior valor no vetor: {maior}")
print(f"Menor valor no vetor: {menor}")
