#include <iostream>
#include <string>

using namespace std;

int main() {

int N = 0;
int R;
int M = 0;

cout<<"Programa que finaliza hasta que la suma sea mayor a 200: \n";
do
{
    cout<<"Digite cuantos numero desea ingresar: \n";
    cin>>N;
    for ( int i = 0;(( i < N) && (M<=200));i++){
    cout<<"Digite el numero para sumar\n";
    cin>>R;
    M = M+R;
    cout<<"La suma va en: "<<M <<"\n";
    }
} while (M <=200);
cout<<"LLego a la meta";









}