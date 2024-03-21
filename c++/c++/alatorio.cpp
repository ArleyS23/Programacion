#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){

    srand(getpid());

       int a =100+rand()%(201-100);
       cout<<"-"<<a<<endl;

       int b =100+rand()%(201-100);
       cout<<"-"<<b<<endl;


    /*srand(getpid());
    for (int i = 1; i < 8; i++){
        int serie = 1+rand()%(100-1);
       int a =1000+rand()%(10000-1000);
       cout<<"Numero de loteria "<<a<<" Numero de serie "<<serie << endl;
    }
    
    /*srand(getpid());
    int ano =2023+rand()%(2051-2023);
    int mes = 4+rand()%(13-4);
    int dia = 1+rand()%(32-1);
    cout<<"DIA "<<dia<<" MES "<<mes<<" AÑO "<<ano<<endl;
    
    int num1, num2, num3, num4, num5, super, n1, n2, n3, n4, n5 ,s;
    do{
    cout<<"Digite el primer numero de la balota: ";
    cin>>num1;
    } while (num1>=43);
    do{
    cout<<"Digite el segundo numero de la balota: ";
    cin>>num2;
    } while (num2>=43);
    do{
    cout<<"Digite el tercer numero de la balota: ";
    cin>>num3;
    } while (num3>=43);
    do{
    cout<<"Digite el cuarto numero de la balota: ";
    cin>>num4;
    } while (num4>=43);
    do{
    cout<<"Digite el quinto numero de la balota: ";
    cin>>num5;
    } while (num5>=43);
    do{
    cout<<"Digite el numero de la super balota: ";
    cin>>super;
    } while (super>=16);

    srand(getpid());
    n1 = 1+rand()%(44-1);
    srand(getpid());
    n2 = 1+rand()%(44-1);
    srand(getpid());
    n3 = 1+rand()%(44-1);
    srand(getpid());
    n4 = 1+rand()%(44-1);
    srand(getpid());
    n5 = 1+rand()%(44-1);
    srand(getpid());
    s = 1+rand()%(17-1);
    if ((num1==n1)&&(num1==n2)&&(num1==n3)&&(num1==n4)&&(num1==n5)){
        cout<<"Numero 1 acertado: "<<n1<<endl;  
    }
    else{
            cout<<"Numero 1 no acertado: "<<n1<<endl;
        }
    if ((num2==n1)&&(num2==n2)&&(num3==n3)&&(num4==n4)&&(num5==n5)){
        cout<<"Numero 2 acertado: "<<n2<<endl;
    }
    else{
            cout<<"Numero 2 no acertado: "<<n2<<endl;
        }
    if ((num3==n1)&&(num3==n2)&&(num3==n3)&&(num3==n4)&&(num3==n5)){
        cout<<"Numero 3 acertado: "<<n3<<endl;
    }
    else{
            cout<<"Numero 3 no acertado: "<<n3<<endl;
        }
    if ((num4==n1)&&(num4==n2)&&(num4==n3)&&(num4==n4)&&(num4==n5)){
        cout<<"Numero 4 acertado: "<<n4<<endl;
    }
    else{
            cout<<"Numero 4 no acertado: "<<n4<<endl;
        }
    if ((num5==n1)&&(num5==n2)&&(num5==n3)&&(num5==n4)&&(num5==n5)){
        cout<<"Numero 5 acertado: "<<n5<<endl;
    }
    else{
            cout<<"Numero 5 no acertado: "<<n5<<endl;
        }
    if (super==s){
        cout<<"Super balota acertado: "<<s<<endl;
    }
    else{
            cout<<"Super balota no acertado"<<s<<endl;
        }*/

    
    



}
