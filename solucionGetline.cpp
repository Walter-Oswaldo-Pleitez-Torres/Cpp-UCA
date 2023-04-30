#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string nombre;
    string aux;
    int edad;
    
    cout<<"Ingresa tu edad"<<endl;
    cin>>edad;

    getline(cin,aux);
    cout<<"Ingresa tu nombre: "<<endl;
    getline(cin,nombre);

    cout<<"Hola "<<nombre<<" tu edad es: "<<edad<<endl;

    return 0;
}