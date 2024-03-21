#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string cadena;
    stack<char> pila;

    cout<<"Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    for(int i = 0; i < cadena.length(); i++) {
        pila.push(cadena[i]);
    }

    string cadenaInvertida = "";
    while(!pila.empty()) {
        cadenaInvertida += pila.top();
        pila.pop();
    }

    cout<<"La cadena invertida es: " << cadenaInvertida << endl;

    return 0;
}
