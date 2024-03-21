#Cristian Camilo Alarcon Delgadillo
#Brayan Arley Saenz Cortes

class Persona:

    def __init__(self,nombre, edad):
        self.__nombre = nombre
        self.__edad = edad
    def getNombre(self):
        return f" {self.__nombre} tengo {self.__edad} "
    
    def Saludo(self):
        return f"Hola amiguito "

class Estudiante(Persona):
    def __init__(self,nombre,edad,carrera):
        super().__init__(nombre,edad)
        self.__carrera = carrera

    def getDatos(self):

        return f"{super().Saludo()} soy{super().getNombre()} años y mi carrera es {self.__carrera} y la cantidad de estudiantes inscrito es {nn}"
    
class Profesor:

    def __init__(self, nombre, edad, materia):
        self.__nombre = nombre
        self.__edad = edad
        self.__materia = materia

    def getDatos(self):
        return f"Soy el profesor {self.__nombre}, tengo {self.__edad} años y enseño {self.__materia}"

    def calificar(self, nombre_alumno, nota):
        return f"El profesor {self.__nombre} ha calificado a {nombre_alumno} con una nota de {nota}"
    
class Estudiante(Persona, Profesor):

    def __init__(self, nombre, edad, carrera, promedio):
        super().__init__(nombre, edad)
        self.__carrera = carrera
        self.__promedio = promedio

    def getDatos(self):
        return f"{super().Saludo()} soy {super().getNombre()} años, mi carrera es {self.__carrera}, mi promedio es {self.__promedio} y la cantidad de estudiantes inscrito es {nn}"


nn=0

n = 1

while n != 0:

    nombre = str(input("dame tu nombre: "))
    edad = str(input("dame tu edad: "))
    carrera = str(input("dame tu carrera: "))
    promedio = float(input("dame tu promedio: "))
    nn=nn+1
    estudiante = Estudiante(nombre,edad,carrera, promedio)

    print(estudiante.getDatos())
    
    print("para agregar otro alumno digite 1 y para finalizar 0")
    n = int(input())


profesor = Profesor("Juan García", 40, "Matemáticas")
print(profesor.calificar("María López", 10))
    
    
        
        
        