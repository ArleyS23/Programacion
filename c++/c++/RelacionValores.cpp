#include <iostream>

using namespace std;

// Declaración de la estructura del nodo
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Declaración de la clase ListaEnlazada
class ListaEnlazada {
    private:
        Nodo* primero;
    public:
        ListaEnlazada() {
            primero = NULL;
        }

        // Método para agregar un elemento al final de la lista
        void agregarElemento(int valor) {
            Nodo* nuevoNodo = new Nodo;
            nuevoNodo->dato = valor;
            nuevoNodo->siguiente = NULL;

            if (primero == NULL) {
                primero = nuevoNodo;
            } else {
                Nodo* actual = primero;
                while (actual->siguiente != NULL) {
                    actual = actual->siguiente;
                }
                actual->siguiente = nuevoNodo;
            }
        }

        // Método para recorrer la lista e imprimir sus elementos
        void mostrarElementos() {
            Nodo* actual = primero;
            while (actual != NULL) {
                cout << actual->dato << " ";
                actual = actual->siguiente;
            }
            cout << endl;
        }
};

// Función principal
int main() {
    ListaEnlazada lista;

    // Agregar elementos a la lista
    lista.agregarElemento(5);
    lista.agregarElemento(10);
    lista.agregarElemento(15);
    lista.agregarElemento(20);

    // Mostrar elementos de la lista
    lista.mostrarElementos();

    return 0;
}