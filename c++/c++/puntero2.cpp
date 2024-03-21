#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 100;

struct Pila {
    char elementos[MAX];
    int top = -1;

    void push(char letra) {
        if (top < MAX - 1) {
            top++;
            elementos[top] = letra;
        } else {
            cout << "La pila esta llena" << endl;
        }
    }

    char pop() {
        if (top >= 0) {
            char letra = elementos[top];
            top--;
            return letra;
        } else {
            cout << "La pila esta vacia" << endl;
            return 0;
        }
    }

    bool empty() {
        return (top < 0);
    }
};

int main() {
    Pila pila;
    char cadena[MAX];
    char caracter;
    int longitud;

    // Leer una cadena de caracteres
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, MAX);

    longitud = strlen(cadena);

    // Agregar los caracteres a la pila en orden inverso
    for (int i = 0; i < longitud; i++) {
        pila.push(cadena[i]);
    }

    // Imprimir la cadena invertida
    cout << "La cadena invertida es: ";
    while (!pila.empty()) {
        caracter = pila.pop();
        cout << caracter;
    }
    cout << endl;

    return 0;
}
