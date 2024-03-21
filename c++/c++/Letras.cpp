#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(){

    char letra;
    string Cadena;
    stack<char> pila;
     
    cout<<"Digite las letras que quiera";
    getline(cin, Cadena);

     for (int i = 0; i < Cadena.length(); i++){
        letra = tolower(letra);
        switch (letra){
    case 'a':
        cout << "Es una vocal";
        break;
    case 'e':
        cout << "Es una vocal";
        break;
    case 'i':
        cout << "Es una vocal";
        break;
    case 'u':
        cout << "Es una vocal";
        break;
    case 'o':
        cout << "Es una vocal";
        break;

    case 'b':
        cout << "Es una consonates";
        break;
    case 'c':
        cout << "Es una consonates";
        break;
    case 'd':
        cout << "Es una consonates";
        break;
    case 'f':
        cout << "Es una consonates";
        break;
    case 'g':
        cout << "Es una consonates";
        break;
    case 'h':
        cout << "Es una consonates";
        break;
    case 'j':
        cout << "Es una consonates";
        break;
    case 'k':
        cout << "Es una consonates";
        break;
    case 'l':
        cout << "Es una consonates";
        break;
    case 'm':
        cout << "Es una consonates";
        break;
    case 'n':
        cout << "Es una consonates";
        break;
    case 'p':
        cout << "Es una consonates";
        break;
    case 'q':
        cout << "Es una consonates";
        break;
    case 'r':
        cout << "Es una consonates";
        break;
    case 's':
        cout << "Es una consonates";
        break;
    case 't':
        cout << "Es una consonates";
        break;
    case 'v':
        cout << "Es una consonates";
        break;
    case 'w':
        cout << "Es una consonates";
        break;
    case 'x':
        cout << "Es una consonates";
        break;
    case 'y':
        cout << "Es una consonates";
        break;
    case 'z':
        cout << "Es una consonante";
        break;
        pila.push(Cadena[i]);
     }

     

}
}