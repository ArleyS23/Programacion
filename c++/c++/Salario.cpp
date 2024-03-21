#include<iostream>
using namespace std;

int main(){

    float Sdia, Tdia, Tnoche;
    float Hdia, Hnoche;
    float salud, pension, riesgo;
    Sdia = 7*50000;
    Tdia = 8000;
    Tnoche = 12000;

    cout<<"-----Programa que calcula salario-----\n";
    cout<<"Turnos diurnos en la semana: "; 
    cin >> Hdia;
    cout<<"Turnos noturno en la semana: ";
    cin >> Hnoche;
    Tdia = Tdia*Hdia;
    Tnoche = Tnoche*Hnoche;
    Sdia = Sdia+Tdia+Tnoche;
    salud = (Sdia*20)/100;
    pension = (Sdia*10)/100;
    riesgo = (Sdia*6)/100;
    Sdia = Sdia-salud-pension-riesgo;
    cout<<"-----Salario-----\n";
    cout<<"Salud_20%-------- "<<salud <<"\n";;
    cout<<"pension_10%------ "<<pension <<"\n";;
    cout<<"Riesgo_6%-------- "<<riesgo <<"\n";;
    cout<<"----------------- " <<"\n";;
    cout<<"Total------------ "<<Sdia <<"\n";;

    return 0;

} 

