#include<iostream>

using namespace std;

int main(){
    string dato1, usuario="walter";
    string dato2, password = "12345";
    int contador = 0;
    bool condicion2 = usuario == dato1;
    bool condicion3 = password == dato2;

    while(contador <= 5){
        cout<<"Ingrese el usuario: ";
        cin>>dato1;
        cout<<"Ingrese contraseña: ";
        cin>>dato2;
        //ARREGLAR CONDICION
        if(condicion2 && condicion3){
            cout<<"ACCESO CONCEDIDO"<<endl;
        }
        else{
            cout<<"ACCESO DENEGADO"<<endl;
        }

        contador++;
    } 


    return 0;
}