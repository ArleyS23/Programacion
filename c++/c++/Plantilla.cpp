#include<iostream>
using namespace std;

template <class Dato1, class Dato2, class Dato3>
void multiplicar (Dato1, Dato2, Dato3);

int main(){

 float vol1, vol2, vol3;
    cout<<"Digite el primer voltaje: ";
    cin>>vol1;
    cout<<"Digite el segundo voltaje: ";
    cin>>vol2;
    cout<<"Digite el tercer voltaje: ";
    cin>>vol3;
    multiplicar(vol1,vol2,vol3);


}

template <class Dato1, class Dato2, class Dato3> 
void multiplicar (Dato1 Vol1, Dato2 Vol2, Dato3 Vol3){

float Sumavol= (Vol1+Vol2+Vol3)/3;

if (Sumavol<=115){
    cout<<"VOLTAJE CORRECTO";
}
else if((Sumavol>=115)&&(Sumavol<=220)){
    cout<<" ALTO VOLTAJE";
}
else if(Sumavol>=220){
    cout<<"PELIGRO";
}
else{
    cout<<"Valor invalido";
}
}

