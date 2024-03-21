#include<iostream>
using namespace std;
int main(){
    
    int Num1, Num2, Num3, Num4;

    cout<<"-----Programa de numero mayor y menor\n";
    cout<<"Ingrese el Primer numero: "; cin>>Num1;
    cout<<"Ingrese el Segundo numero: "; cin>>Num2;
    cout<<"Ingrese el Tercer numero: "; cin>>Num3;
    cout<<"Ingrese el Cuarto numero: "; cin>>Num4;

    if ((Num1>Num2)&&(Num1>Num3)&&(Num1>Num4)){
        cout<<"El numero mayor es: "<<Num1<<"\n";
    }
    else if((Num2>Num1)&&(Num2>Num3)&&(Num2>Num4)){
        cout<<"El numero mayor es: "<<Num2<<"\n";
    }
    else if((Num3>Num1)&&(Num3>Num2)&&(Num3>Num4)){
        cout<<"El numero mayor es: "<<Num3<<"\n";
    }
    else if((Num4>Num1)&&(Num4>Num3)&&(Num4>Num2)){
        cout<<"El numero mayor es: "<<Num4<<"\n";
    }
    if((Num1<Num2)&&(Num1<Num3)&&(Num1<Num4)){
        cout<<"El numero menor es: "<<Num1<<"\n";
    }
    else if((Num2<Num1)&&(Num2<Num3)&&(Num2<Num4)){
        cout<<"El numero menor es: "<<Num2<<"\n";
    }
    else if((Num3<Num1)&&(Num3<Num2)&&(Num3<Num4)){
        cout<<"El numero menor es: "<<Num3<<"\n";
    }
    else if((Num4<Num1)&&(Num4<Num3)&&(Num4<Num2)){
        cout<<"El numero menor es: "<<Num4<<"\n";
     }
}