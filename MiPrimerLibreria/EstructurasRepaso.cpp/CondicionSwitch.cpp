#include <iostream>

using namespace std;

int main(){
    int opcion;
    cout<<"Servicio al cliente"<<endl;

    cout<<"recuperar clave 1) recuperar usuario 2) cambiar numero 3) recarga 4)"<<endl;
    cout<<"Ingrese una opcion:"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
        cout<<"Recuperando clave"<<endl;
        break;
        case 2:
        cout<<"Recuperando usuario"<<endl;
        break;
        case 3:
        cout<<"Cambiando numero"<<endl;
        break;
        case 4:
        cout<<"Recargando saldo"<<endl;
        break;
        default:
        cout<<"El numero ingresado no tiene opciones"<<endl;
    }

    return 0;
}