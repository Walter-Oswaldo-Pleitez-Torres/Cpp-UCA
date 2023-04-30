#include<iostream>

//PROBLEMA GETLINE: no captura el input para el string

using namespace std;

int main(){
    int edad;
    string nombre;

    cout<<"Ingrese edad"<<endl;
    cin>>edad;
    cout<<"Ingrese nombre"<<endl,
    getline(cin, nombre);

    cout<<"Hola "<<nombre<<" tu edad es: "<<edad<<endl;
}