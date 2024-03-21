import tkinter 

ventana = tkinter.Tk()     #contenedor 
ventana.geometry("400x400")

etiqueta = tkinter.Label(ventana, text ="Hola Mundo", bg="black")
etiqueta.pack(fill=tkinter.X)   #colocar el laber en pantalla

cajanumero1 = tkinter.Entry(ventana, font="Helveltica 20")
cajanumero1.pack()
cajanumero2 = tkinter.Entry(ventana, font="Helveltica 20")
cajanumero2.pack()

def numerosdelacaja():
    numero1 = int(cajanumero1.get())
    numero2 = int(cajanumero2.get())
    multiplicacion = numero1*numero2
    etiquetaresult["text"]= multiplicacion
    #print("El resultado de la multipliacion es ", multiplicacion)

boton = tkinter.Button(ventana, text="Multiplicar", command= numerosdelacaja)
boton.pack()

etiquetaresult = tkinter.Label(ventana, text ="", bg="red", font="Helveltica 20")
etiquetaresult.pack(fill=tkinter.X)   #colocar el laber en pantalla

ventana.mainloop()