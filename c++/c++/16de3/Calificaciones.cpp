#include <iostream>
#include <string>

using namespace std;

int main() {
float A;
float mayor = 0;
float menor = 125;
float total = 0;
cout<<"Promedio de calificacon de 25 alumnos\n";
for (int i = 1; i < 26; i++){
    
    cout<<"Alumno "<<i<<" valor de su nota: ";
    cin>>A;
    total += A;
    if (A < menor){
        menor = A;
    }
    if (A > mayor){
        mayor = A;
    }
}
cout<<"Calificacion promedio de los alumnos: "<<total/25<<"\n";
cout<<"Mayor nota: "<<menor<<"\n";
cout<<"Menor nota: "<<mayor;
}