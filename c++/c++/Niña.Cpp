#include <iostream>
#include <string>

using namespace std;

int main() {
int total = 0;
int edad = 12;    
for (int i = 10; i<=1000 ; i=i*2){
    cout<<"Edad de la niña es de "<<edad<< "su regalo es de "<<i<<"\n";
    total = total+i;
    edad++;

}
cout<<"A la edad de "<<edad<<" Se le daran "<<total<<"\n";


}