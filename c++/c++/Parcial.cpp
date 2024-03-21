#include<iostream>
using namespace std;
int main(){

float salarioD = 0;
int lunes, martes, miercoles, jueves, viernes;
cout<<"------Empresa de zapatos------\n";
cout<<"Digite Tu salario por hora: "; cin>>salarioD;
cout<<"Cuantos zapatas produce a la semana: \n";
cout<<"Lunes: "; cin>>lunes;
cout<<"Martes: "; cin>>martes;
cout<<"Miercoles: "; cin>>miercoles;
cout<<"Jueves: "; cin>>jueves;
cout<<"Viernes: "; cin>>viernes;
float InLM = 0;
float InLT = 0;
float salarioS= (salarioD*8)*5;

if ((lunes>=15)&&(martes>=23)&&(miercoles>=21)&&(jueves>=26)&&(viernes>=15)){
float InLM = (salarioS*20)/100;
float InLT = (salarioS*15)/100;
float total = salarioS+InLM+InLT;
cout<<"A obtenido un incetivo del 20% y 15% \n";
cout<<"-----------Salario de la semana-----------\n";
cout<<"Salario diario__________________"<<salarioD <<"\n";
cout<<"incentivo dos dias______________"<<InLM<<"\n";
cout<<"incentivo tres dias_____________"<<InLT<<"\n";
cout<<"Salario semanal_________________"<<salarioS<<"\n";
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
cout<<"Total____________________________"<<total;
}

 else if ((lunes>=15)&&(martes>=23)){
    float InLM= (salarioS*20)/100;
    float total = salarioS+InLM+InLT;
cout<<"A obtenido un incetivo del 20% \n";
cout<<"-----------Salario de la semana-----------\n";
cout<<"Salario diario__________________"<<salarioD<<"\n";
cout<<"incentivo dos dias______________"<<InLM<<"\n";
cout<<"incentivo tres dias_____________"<<InLT<<"\n";
cout<<"Salario semanal_________________"<<salarioS<<"\n";
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
cout<<"Total____________________________"<<total;
}
else if ((miercoles>=21)&&(jueves>=26)&&(viernes>=15)){
    float InLT = (salarioS*15)/100;
    float total = salarioS+InLM+InLT;
cout<<"A obtenido un incetivo del 15% \n";
cout<<"-----------Salario de la semana-----------\n";
cout<<"Salario diario__________________"<<salarioD<<"\n";
cout<<"incentivo dos dias______________"<<InLM<<"\n";
cout<<"incentivo tres dias_____________"<<InLT<<"\n";
cout<<"Salario semanal_________________"<<salarioS<<"\n";
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
cout<<"Total____________________________"<<total;
}
else {
    float total = salarioS+InLM+InLT;
cout<<"-----------Salario de la semana-----------\n";
cout<<"Salario diario__________________"<<salarioD<<"\n";
cout<<"incentivo dos dias______________"<<0<<"\n";
cout<<"incentivo tres dias_____________"<<0<<"\n";
cout<<"Salario semanal_________________"<<salarioS<<"\n";
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
cout<<"Total____________________________"<<total;
} 


return 0;
}
