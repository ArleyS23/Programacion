#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char letra;

    cout << "Escriba una letra ";
    cin >> letra;
    letra = tolower(letra);

    switch (letra)
    {
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
    case '0':
        cout << "cero";
        break;
    case '1':
        cout << "uno";
        break;
    case '2':
        cout << "dos";
        break;
    case '3':
        cout << "tres";
        break;
    case '4':
        cout << "cuatro";
        break;
    case '5':
        cout << "cinco";
        break;
    case '6':
        cout << "seis";
        break;
    case '7':
        cout << "siete";
        break;
    case '8':
        cout << "ocho";
        break;
    case '9':
        cout << "nueve";
        break;

    default:
        break;
    }
}