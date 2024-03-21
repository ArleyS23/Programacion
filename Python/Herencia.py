class bebida:
    
    def __init__(self,nombre):
        self.__nombre=nombre

    def getobtenernombre(self):
        return f"la bebida es {self.__nombre}"

class cerveza (bebida):
    def __init__(self,nombre,marca,alcohol):
        super().__init__(nombre)
        self.__marca=marca
        self.__alcohol=alcohol

    def getobtenernombre(self):
        return f"{super().getobtenernombre()} de la marca {self.__marca} con un nivel de alcohol de {self.__alcohol}"
        
cerveza=cerveza("poker","babaria",4.0)        
print(cerveza.getobtenernombre())


