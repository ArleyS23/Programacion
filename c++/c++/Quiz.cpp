#include <cstdlib>
#include <iostream>
#include <string>

void juego();

using namespace std;


int main(){
cout<<"|------------Juego de parejas-------------|\n";
cout<<"|-----------------------------------------|\n";
cout<<"|             |             |             |\n";
cout<<"|      1      |      2      |      3      |\n";
cout<<"|             |             |             |\n";
cout<<"|-------------|-------------|-------------|\n";
cout<<"|             |             |             |\n";
cout<<"|      4      |      5      |      6      |\n";
cout<<"|             |             |             |\n";
cout<<"|-------------|-------------|-------------|\n";

int f1, f2, f3, f4, f5, f6;
int n1=0, n2=0, n3=2, n4=2, n5=3, n6=3;
int p1, p2, p3, p4, p5, p6;
do{
do{
do{
do{
do{
    srand(getpid());
    f1 = 1+rand()%(7-1);
    srand(getpid());
    f2 = 1+rand()%(7-1);
} while (f1!=f2);
    srand(getpid());
    f3 = 1+rand()%(7-1);
}while (f2 != f3);
    srand(getpid());
    f4 = 1+rand()%(7-1);
}while (f3 != f4);
    srand(getpid());
    f5 = 1+rand()%(7-1);
}while (f4 != f5)
    srand(getpid());
    f6 = 1+rand()%(7-1);
}while (f5 != f6);
f1 = n1;
f2 = n2;
f3 = n3;
f4 = n4;
f5 = n5;
f6 = n6;

cout<<"Eligue una de las fichas y comparelo con otro\n";
cout<<"Numero de la ficha: ";
cin>>p1;
cout<<"la ficha es "<<f1;
cout<<"otro ficha: ";
cin>>p2;
cout<<"La ficha es "<<f2;





}


