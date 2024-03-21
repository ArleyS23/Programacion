#include<iostream>
using namespace std;
int main(){

    int bi;
    cout<<"----------Programa de ano bisiesto----------\n";
    cout<<"Digite un ano, para determinar si es bisiesto: "; cin>>bi;
    if (bi % 100 !=0){
        if (bi % 4 == 0){
        cout<<"Es bisiesto";
        }
    else{
        cout<<"No bisiesto";
    }
    }
    else if (bi % 400 == 0){
        cout<<"Es bisiesto";
    }
    else{  
        cout<<"No bisiesto";
    }

}