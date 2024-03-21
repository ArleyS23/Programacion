#include<iostream>
using namespace std;

int main(){
int V1, V2;
cout<<"Carrera de carros"<<endl;
cout<<"El primero a llegar a 1000 metros gana"<<endl;
srand(getpid());
do{
V1 = 1+rand()%(55-1);
V2 = 1+rand()%(55-1);
V1 = V1 + V1;
cout<<"Carro uno va "<<V1<<endl;
V2 = V2 + V2;
cout<<"Carro dos va "<<V2<<endl;
}while ((V1<=100)&&(V2<=100));
    if (V1<=100){
        cout<<"Gano el carro 1";
    }
    else if (V2<=100){
        cout<<"Gano el carro 2";
    }else{
        cout<<"Error";
    }

}