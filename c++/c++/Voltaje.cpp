#include <iostream>
#include <string>

using namespace std;

void Voltajes(float,float,float);

int main() {
    float vol1, vol2, vol3;
    cout<<"Digite el primer voltaje: ";
    cin>>vol1;
    cout<<"Digite el segundo voltaje: ";
    cin>>vol2;
    cout<<"Digite el tercer voltaje: ";
    cin>>vol3;
    Voltajes(vol1,vol2,vol3);
}


void Voltajes(float Vol1,float Vol2,float Vol3){

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
