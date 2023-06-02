#include <iostream>

using namespace std;

void imprimir(int num1, int num2);

int main(){
    int num1, num2;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num2;

    imprimir(num1, num2);


    return 0;
}

void imprimir(int num1, int num2){
    cout<<"El primer numero ingresado fue: "<<num1<<endl;
    cout<<"El segundo numero ingresado fue: "<<num2<<endl;
}