#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int auto1 = 0;
    int auto2 = 0;
    int veloauto1 = 0;
    int veloauto2 = 0;

    srand(getpid());
    int distancia = 1000+rand()%(5000-1000);
    cout<<"Distancia: "<<distancia;
    while (auto1 < distancia && auto2 < distancia) {
        veloauto1 = 1+rand() % (55-1); 
        veloauto2 = 1+rand() % (55-1); 

        auto1 += veloauto1; 
        auto2 += veloauto2;

        cout << "Auto 1: " << auto1 << " m" << endl;
        cout << "Auto 2: " << auto2 << " m" << endl;
    }

    if (auto1 >= distancia && auto2 >= distancia) {
        cout << "¡Empate!" << endl;
    } else if (auto1 >= distancia) {
        cout << "¡Gana el auto 1!" << endl;
    } else {
        cout << "¡Gana el auto 2!" << endl;
    }
}
