#include <iostream>
#include <string>

using namespace std;

int main() {

int N = 0;
int R;
int M = 0;

cout<<"Programa que su la cantidad que quiera de numeros: \n";
    cout<<"Digite cuantos numero desea ingresar: \n";
    cin>>N;
    for ( int i = 0;i < N;i++){
    cout<<"Digite un numero: ";
    cin>>R;
    M = M+R;
    }
cout<<"La suma es de: "<<M;
}