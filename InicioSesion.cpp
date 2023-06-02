#include<iostream>
#include<string>

using namespace std;

int main(){
    int intentos=0, num3;
    string usuario="Walter", user;
    string password="12345", pwd;

    do{
        cout<<"Ingrese usuario: ";
        cin>>user;
        cout<<"Ingrese clave: ";
        cin>>pwd;

        bool equal1 = usuario == user; //Es verdad
        bool equal2 = password == pwd;

        if(equal1 && equal2){
            cout<<"ACCESO CONCEDIDO"<<endl;
            break;
        }
        else{
            cout<<"ACCESO DENEGADO"<<endl;
            cout<<"Le quedan "<<2-intentos<<" intentos."<<endl;
        }

        cout<<"*****************************"<<endl;

        intentos++;
    }while(intentos<3);

    return 0;
}