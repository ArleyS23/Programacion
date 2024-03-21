#include<iostream>
using namespace std;
int main(){

int H,M,S ;

cout<<"Ingrese la hora: ";
cin>>H;
cout<<"Ingrese los minutos: ";
cin>>M;
cout<<"Ingrese los segundos: ";
cin>>S;
if (H<=23){
    if (M<=59){
        if (S<=59) {
            cout<<"Su hora es correcta: "<<H<<" h: " <<M<<"m: "<<S<<"s";
        } 
    } 
}
else{
    cout<<"Su hora es incorrecta";
}

}