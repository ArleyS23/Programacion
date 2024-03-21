#include<iostream>
using namespace std;

void dado(int,int,int);

int main(){
cout<<"Juego de dados"<<endl;
cout<<"Tiene 3 intentos"<<endl;
srand(getpid());
dado(0,0,1);
}

void dado(int D1,int D2,int i){
        do{
        cout<<"Intento "<<i<<endl;
        D1 = 1+rand()%(7-1);
        D2 = 1+rand()%(7-1);
        cout<<"El dado uno salio: "<<D1<<endl;
        cout<<"El dado dos salio: "<<D2<<endl;
        i++;
        } while ((D1!=D2)&&(i<=3));

        if(D1!=D2){
           cout<<"Numero de intentos agotados";
        }
        else{
            cout<<"Felicidades, Gano";
        }
    }


