class bebida:
    
    def _init_(self,nombre):
        self.__nombre=nombre

    def getobtenernombre(self):
        return f"la bebida es {self.__nombre}"


class cerveza (bebida):
    def _init_(self,nombre,marca,alcohol):
        super()._init_(nombre)
        self.__marca=marca
        self.__alcohol=alcohol

    def getobtenernombre(self):
        return f"{super().getobtenernombre()} de la marca {self._marca} con un nivel de alcohol de {self._alcohol}"
        

cerveza=cerveza("poker","babaria",4.0)        
print(cerveza.getobtenernombre())