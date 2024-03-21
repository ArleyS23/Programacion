#include <iostream>
using namespace std;

int main (){
    int anioAct, mesAct, fechAct; 
 
    int anioNac,mesNac, fechNac; 
 
    cout << "------Programa que calcula su edad------\n";
    cout << "Digite el Ano Actual: ";   cin >> anioAct;
    cout << "Digite el Mes Actual: ";   cin >> mesAct;
    cout << "Digite el Dia Actual: ";  cin >> fechAct;
 
    cout << "\nDigite su Ano de Nacimiento: ";  cin >> anioNac;
    cout << "Digite su mes de Nacimiento: ";  cin >> mesNac;
    cout << "Digite su dia de Nacimiento: ";  cin >> fechNac;

    int respFech , respMes;
 
    if ( fechAct < fechNac  )
    {   
        fechAct = fechAct + 30; 
        mesAct = mesAct - 1; 
        respFech =  fechAct - fechNac; 
    }
    else 
        respFech =  fechAct - fechNac;  
    if( mesAct < mesNac )
    {  
        mesAct = mesAct + 12; 
        anioAct = anioAct - 1 ; 
        respMes = mesAct - mesNac; 
    }
    else 
        respMes = mesAct - mesNac;
 
    cout << "------Su edad es------\n";
    cout << "Edad: " <<anioAct - anioNac <<"\n";
    cout << "Mes: " <<respMes <<"\n";
    cout << "Dia: " <<respFech <<"\n";

return 0;
}



else if ((miercoles>=21)&&(jueves>=26)&&(viernes>=15)){
    float InLT = (salarioS*15)/100;
cout<<"A obtenido un incetivo del 15% \n";
cout<<"-----------Salario de la semana-----------\n";
cout<<"Salario diario__________________"<<salarioD<<"\n";
cout<<"incentivo dos dias______________"<<InLM<<"\n";
cout<<"incentivo tres dias_____________"<<InLT<<"\n";
cout<<"Salario semanal_________________"<<salarioS<<"\n";
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
cout<<"Total____________________________"<<total;