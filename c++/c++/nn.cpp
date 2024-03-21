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

        // Método para agregar un elemento al inicio de la lista
        void agregarInicio(int valor) {
            Nodo* nuevoNodo = new Nodo;
            nuevoNodo->dato = valor;
            nuevoNodo->siguiente = primero;
            primero = nuevoNodo;
        }

        // Método para eliminar un elemento por valor
        void eliminar(int valor) {
            Nodo* actual = primero;
            Nodo* anterior = NULL;

            while (actual != NULL && actual->dato != valor) {
                anterior = actual;
                actual = actual->siguiente;
            }

            if (actual != NULL) {
                if (anterior == NULL) {
                    primero = actual->siguiente;
                } else {
                    anterior->siguiente = actual->siguiente;
                }
                delete actual;
            }
        }

        // Método para buscar un elemento por valor
        Nodo* buscar(int valor) {
            Nodo* actual = primero;

            while (actual != NULL && actual->dato != valor) {
                actual = actual->siguiente;
            }

            return actual;
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

    // Agregar elementos al inicio de la lista
    lista.agregarInicio(20);
    lista.agregarInicio(15);
    lista.agregarInicio(10);
    lista.agregarInicio(5);

    // Mostrar elementos de la lista
    lista.mostrarElementos();

    // Eliminar elemento de la lista
    lista.eliminar(5);

    // Buscar elemento en la lista
    Nodo* nodo = lista.buscar(10);
    if (nodo != NULL) {
        cout << "El valor 10 fue encontrado en la lista." << endl;
    } else {
        cout << "El valor 10 no fue encontrado en la lista." << endl;
    }

    return 0;
}