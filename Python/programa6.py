try:
    saldo_retirado = int(input("Informe o saldo: "))
except ValueError:
    print("\033[31mERRO: Informe um valor correto!\033[m")
else:
    cont_cem = cont_cinq = cont_vinte = cont_dez = cont_cinco = cont_dois = cont_um = 0
    while saldo_retirado > 0:
        if saldo_retirado >= 100:
            saldo_retirado -= 100
            cont_cem += 1 
        elif saldo_retirado >= 50:
            saldo_retirado -= 50
            cont_cinq += 1
        elif saldo_retirado >= 20:
            saldo_retirado -= 20
            cont_vinte += 1
        elif saldo_retirado >= 10:
            saldo_retirado -= 10
            cont_dez += 1
        elif saldo_retirado >= 5:
            saldo_retirado -= 5
            cont_cinco += 1
        elif saldo_retirado >= 2:
            saldo_retirado -= 2
            cont_dois += 1
        else:
            saldo_retirado -= 1
            cont_um += 1
    print(f"Célula de 100R$: {cont_cem}")
    print(f"Célula de 50R$: {cont_cinq}")
    print(f"Célula de 20R$: {cont_vinte}")
    print(f"Célula de 10R$: {cont_dez}")
    print(f"Célula de 5R$: {cont_cinco}")
    print(f"Célula de 2R$: {cont_dois}")
    print(f"Célula de 1R$: {cont_um}")
