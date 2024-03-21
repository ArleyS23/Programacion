#include <iostream>
#include <string>

using namespace std;

int main() {
float Notas;
float promedio;
int NumEs;
cout<<"Digite el numero de Estudiantes\n";
cin>>NumEs;

for (int i = 1; i < NumEs+1; i++){
    promedio = 0;
    Notas = 0;
    for (int n = 1; n < 8; n++){
        cout<<"Alumno numero "<<i<<" Valor de nota "<<n <<":\n";
        cin>>Notas;

    promedio += Notas;
    }
    cout<<"Promedio del estudiante "<<i<< " es de "<<promedio/7<<":\n";
}
}
