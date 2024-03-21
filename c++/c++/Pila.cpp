#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main (){
	Nodo *pila = NULL;
	int numero;
	
	cout<<"Ingrese el numero"<<endl;
	cin>>numero;
	agregarPila(pila,numero);
	
	cout<<"ingrese el numero"<<endl;
	cin>>numero;
	agregarPila(pila,numero);
	
		while(pila != NULL){
			sacarPila(pila,numero);
			if(pila != NULL)
			cout<<numero<<","<<endl;
			else
			cout<<numero<<".";
		}
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout<<"Elemento agregado Correctamente"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
	
	Nodo *aux = pila;
	n = aux -> dato;
	pila = aux -> siguiente;
    delete aux;
}
