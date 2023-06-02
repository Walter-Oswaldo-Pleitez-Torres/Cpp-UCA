#include <iostream>

using namespace std;

int main(){
    int numero;
    cout<<"Comprobar si un numero es par o impar"<<endl;
    cout<<"Ingrese un numero: ";
    cin>>numero;

    if(numero%2 == 0){
        cout<<"El numero: "<<numero<<" es un numero par"<<endl;
    }
    else{
        cout<<"El numero ingresado es impar"<<endl;
    }

    return 0;
}