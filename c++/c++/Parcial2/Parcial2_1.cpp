#include<iostream>
using namespace std;

void Menu(int);
void juego(int,int, int, int);


int main(){
srand(getpid());
Menu(0);
}

void juego(int Op,int i, int P, int C){
    cout<<"Es al mejor de 5 rondas"<<endl;
    do{
    cout<<"Selecione uno de las tres opciones"<<endl;
    cout<<"1-Piedra"<<endl;
    cout<<"2-Papel"<<endl;
    cout<<"3-Tijera"<<endl;
    cin>>Op;
    int E = 1+rand()%(3-1);
    switch (E){
    case 1:
        cout<<"IA selecciono Piedra"<<endl;
        if (Op==1){
            cout<<"Usted selecciono Piedra"<<endl;
            cout<<"Empate"<<endl;
        }
        else if (Op==2){
            cout<<"Usted selecciono Papel"<<endl;
            cout<<"Un punto"<<endl;
            P++;
        }
        else if (Op==3){
            cout<<"Usted selecciono Tijera"<<endl;
            cout<<"Pierde"<<endl;
            C++;
        }
        break;
    case 2:
        cout<<"IA selecciono Papel"<<endl;
        if (Op==1){
            cout<<"Usted selecciono Piedra"<<endl;
            cout<<"Pierde"<<endl;
            C++;
        }
        else if (Op==2){
            cout<<"Usted selecciono Papel"<<endl;
            cout<<"Empate"<<endl;
            
        }
        else if (Op==3){
            cout<<"Usted selecciono Tijera"<<endl;
            cout<<"Un punto"<<endl;
            P++;
        }
        break;
    case 3:
        cout<<"IA selecciono Tijera"<<endl;
        if (Op==1){
            cout<<"Usted selecciono Piedra"<<endl;
            cout<<"Un punto"<<endl;
            P++;
        }
        else if (Op==2){
            cout<<"Usted selecciono Papel"<<endl;
            cout<<"Pierde"<<endl;
            C++;
        }
        else if (Op==3){
            cout<<"Usted selecciono Tijera"<<endl;
            cout<<"Empate"<<endl;
            
        }
        break;
    
    default:
        break;
    }
    i++;
    } while (i<=5);
    cout<<"--------Puntaje--------"<<endl;
    cout<<"Jugador "<<P<<endl;
    cout<<"IA "<<C<<endl;
    if (P>C){
        cout<<"Usted Gana, felicidades"<<endl;
    }
    else if (C>P){
        cout<<"AI Gano, Pierde"<<endl;
    }
    else if (P==C){
        cout<<"Empate"<<endl;
    }else{
        cout<<"Error"<<endl;
    }
    

}
void Menu(int M){


    cout<<"--------MENU--------"<<endl;
    cout<<"1-Jugar"<<endl;
    cout<<"2-Salir"<<endl;
    cin>>M;
    switch (M)
    {
    case 1:
        juego(0,1,0,0);
        Menu(0);
        break;
    
    case 2:
        cout<<"Adios :)"<<endl;
        break;
    
    default:
        break;
    }
        
    }
    
    

    
