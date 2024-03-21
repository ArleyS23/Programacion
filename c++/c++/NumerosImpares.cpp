#include <iostream>
#include <string>

using namespace std;

int main() {

int N = 0;
int M;
for (int i = 1; i < 100; i=i+2){

    cout<<i<<"\n";
    M = i+i;
    N++;
}

cout<<"La suma total es de: "<<M<<"\n";
cout<<"La cantidad de numeros es de: "<<N;


}