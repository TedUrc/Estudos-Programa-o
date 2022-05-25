from re import S


usuarios_idades = {"Nome": [], "Idade": []}
idade = 0
contagem = 1

while idade >= 0:
    try:
        print(f"[ USUÁRIO {contagem} ]")
        contagem += 1
        nome = input("Informe o nome do usuário: ")
        idade = int(input(f"Informe a idade de {nome}: "))
    except ValueError:
        print("\033[31mERRO: Informe o nome e a idade corretamente!\033[m")
    else:
        if idade > 0:
            usuarios_idades["Nome"].append(nome)
            usuarios_idades["Idade"].append(idade)

for ordem in range(0, len(usuarios_idades["Idade"])):
    for sort in range(0, len(usuarios_idades["Idade"]) - ordem - 1):
        if usuarios_idades["Idade"][sort] > usuarios_idades["Idade"][sort + 1]:
            auxiliar_numero = usuarios_idades["Idade"][sort]
            usuarios_idades["Idade"][sort] = usuarios_idades["Idade"][sort + 1]
            usuarios_idades["Idade"][sort + 1] = auxiliar_numero
            auxiliar_nome = usuarios_idades["Nome"][sort]
            usuarios_idades["Nome"][sort] = usuarios_idades["Nome"][sort + 1]
            usuarios_idades["Nome"][sort + 1] = auxiliar_nome


for index in range(0, len(usuarios_idades["Nome"])):
    print(f"Nome: {usuarios_idades['Nome'][index]} - Idade: {usuarios_idades['Idade'][index]}")
