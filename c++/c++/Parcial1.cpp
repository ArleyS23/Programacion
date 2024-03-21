#include<iostream>
using namespace std;
int main(){

float salarioD = 0;
int lunes, martes, miercoles, jueves, viernes;
float luness, martess, miercoless, juevess, vierness;
cout<<"------Empresa de zapatos------\n";
cout<<"Digite Tu salario por hora: "; cin>>salarioD;
cout<<"Cuantos zapatas produce a la semana: \n";
cout<<"Lunes: "; cin>>lunes;
cout<<"Martes: "; cin>>martes;
cout<<"Miercoles: "; cin>>miercoles;
cout<<"Jueves: "; cin>>jueves;
cout<<"Viernes: "; cin>>viernes;
float salarioH = salarioD*8;
float salarioS= salarioH*5;


if ((lunes>=15)&&(martes>=23)&&(miercoles>=21)&&(jueves>=26)&&(viernes>=15)){
    luness = (salarioH*20)/100;
    martess = (salarioH*20)/100;
    miercoless = (salarioH*15)/100;
    juevess = (salarioH*15)/100;
    vierness = (salarioH*15)/100;
}
else if((lunes>=15)&&(martes>=23)&&(miercoles>=21)&&(jueves>=26)){
    luness = (salarioH*20)/100;
    martess = (salarioH*20)/100;
    miercoless = (salarioH*15)/100;
    juevess = (salarioH*15)/100;
    
   
}
else if((lunes>=15)&&(martes>=23)&&(miercoles>=21)){
luness = (salarioH*20)/100;
    martess = (salarioH*20)/100;
    miercoless = (salarioH*15)/100;
    

}
else if((lunes>=15)&&(martes>=23)){

luness = (salarioH*20)/100;
    martess = (salarioH*20)/100;
    
}
else if((lunes>=15)){
    luness = (salarioH*20)/100;
   

}
float total = salarioS +luness + martess + miercoless;


cout<<"-----------Salario de la semana-----------\n";
cout<<"Salario por hora________________"<<salarioD <<"\n";
cout<<"Salario diario__________________"<<salarioH <<"\n";
cout<<"Lunes___________________________"<<luness<<"\n";
cout<<"Martes__________________________"<<martess<<"\n";
cout<<"Miercoles_______________________"<<miercoless<<"\n";
cout<<"Jueves__________________________"<<0<<"\n";
cout<<"Viernes_________________________"<<0<<"\n";
cout<<"Salario semanal_________________"<<salarioS<<"\n";
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
cout<<"Total____________________________"<<total;



return 0;

}