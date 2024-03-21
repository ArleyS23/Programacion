#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int Publicacion;
    string genero;
};

int main() {
    int NumeroL;
    cout<<"Ingrese la cantidad de libros que desea registrar: ";
    cin>>NumeroL;

    Libro libros[NumeroL];

    for (int i = 0; i < NumeroL; i++) {><
        cout<<"Libro numero: " <<i+1<<endl;
        cout<<"Titulo: ";
        getline(cin>> ws, libros[i].titulo); 
        cout<<"Autor: ";
        getline(cin>> ws, libros[i].autor);
        cout<<"Publicacion: ";
        cin>>libros[i].Publicacion;
        cout<<"Genero: ";
        getline(cin >> ws, libros[i].genero);
        cout<<endl;
    }

    cout<<"---------------------------"<<endl;
    cout<<"|    Libros registrados   |"<<endl;
    cout<<"---------------------------"<<endl;

    for (int i = 0; i < NumeroL; i++) {
        cout<<"Libro numero: "<<i+1<<endl;
        cout<<"Titulo: "<< libros[i].titulo<<endl;
        cout<<"Autor: "<< libros[i].autor<<endl;
        cout<<"Año de publicacion: "<<libros[i].Publicacion<<endl;
        cout<<"Genero: " << libros[i].genero<<endl;
        cout<<endl;
    }

    int Despues = 0;
    for (int i = 0; i < NumeroL; i++) {
        if (libros[i].Publicacion > 2000) {
            Despues++;
        }
    }

    cout<<"Libros publicados despues del año 2000: "<<Despues<<endl;

    return 0;
}
