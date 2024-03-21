#include<iostream>
using namespace std;

int main(){
	
	char cadena;
	char *puntero;
	cout<<"Escribe una cadena de caracteres"<<endl;
	cin>>cadena;
	
	puntero =& cadena;
	
	cout<<*puntero<<endl;
	
	return 0;
}
