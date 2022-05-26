class Quadrado:
    def __init__(self, lado):
        self.__lado = lado

    @property
    def valor(self):
        return self.__lado

    @valor.setter
    def valor(self, lado=None):
        if lado is not None:
            lado = str(lado)
            booleano = lado.isnumeric()
            if booleano:
                self.__lado = int(lado)
            else:
                raise "ERRO: Informe um valor numérico!"
        else:
            raise "ERRO: Informe um valor numérico!"

    def retorna_quadrado(self):
        lado = self.valor
        quadrado = lado ** 2
        return quadrado


matematica = Quadrado(2)
matematica.valor = 5
print(matematica.retorna_quadrado())
