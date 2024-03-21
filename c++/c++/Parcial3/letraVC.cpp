#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> pila;
    char letra;
    int vocales = 0;
    int consonantes = 0;

    do {
        cout<<"Ingrese las letras que desee"<<endl;
        cin>>letra;
        if (letra != '0') {
            pila.push(letra);
        }
    } while (letra != '0');

    cout<<"Elementos de la pila: "<<endl;
    while (!pila.empty()) {
        char letra = pila.top();
        pila.pop();
        cout << letra << " ";

        if (isalpha(letra)) {
            char letraMin = tolower(letra);
            if (letraMin == 'a' || letraMin == 'e' || letraMin == 'i' || letraMin == 'o' || letraMin == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        }
    }

    cout << "\nNumero de vocales: " << vocales << endl;
    cout << "Numero de consonantes: " << consonantes << endl;

    return 0;
}

