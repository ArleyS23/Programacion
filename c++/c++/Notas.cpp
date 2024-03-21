#include<iostream>
using namespace std;
int main(){
	
	float num1, num2 , num3;
	float rel;
	
	cout<<"Hola este programa solicita la nota de 3 materias y le da su promedio\n";
	cout<<"Cual es la nota de su primera materia: ";
	cin>>num1;
	cout<<"nota de su segunda materia: ";
	cin>>num2;
	cout<<"nota de su tercera materia: ";
	cin>>num3;
	rel = (num1+num2+num3)/3;
	cout<<"Su promedio es de: "<<rel<<"\n";
	if((rel<=1)&&(rel>0)){
		cout<<"Estudiante Reprobado";
	}
	else if ((rel>1)&&(rel<=2,5)){
		cout<<"Estudiante en Condicionamiento";
	}
	else if ((rel>2,5)&&(rel<=2,9)){
		cout<<"Estudiante con probabilidades de aprobar";
	}
	else if ((rel>3)&&(rel<=4)){
		cout<<"Estudiante en Aprobado";
	}
	else if ((rel>4)&&(rel<=5)){
		cout<<"Estudiante Aprobado con excelencia promedio";
	}
	
	return 0;
	
}

