include<iostream>
using namespace std;

template<class NumV, class NumVen>
void vendedores(NumV,NumVen);
float Nv;
float Nven;
cout<<"Numero de vendedores:\n";
cin>>Nv;
int main(){

vendedores();

}

template<class NumV, class NumVen>
void vendedores(NumV vendedores,NumVen ventas){
float seguro = 10000;
    for (int i = 1; i < vendedores+1; i++){
        Nv=0;
        Nven=0;
        for (int v = 1; v < ventas+1; v++){
            
            cout<<"Vendedor "<<i<<" numero de ventas es de: ";
            cin>>Nven;
            seguro = seguro*Nven;
            seguro = (seguro*10)/100;

        }
        cout<<"Vendedor "<<i<< " Vendio "<<Nven<<" y gano: "<<seguro;
    }
}