#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int edad;
    string nombre;

    cout<<"Ingrese su edad"<<endl;
    cin>>edad;

    cin.ignore();
    cout<<"Ingrese su nombre"<<endl;
    getline(cin,nombre);

    cout<<"Hola "<<nombre<<", edad "<< edad;

    return 0;
}