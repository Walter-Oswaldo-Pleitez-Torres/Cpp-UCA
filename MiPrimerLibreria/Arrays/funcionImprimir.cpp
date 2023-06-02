#include <iostream>

using namespace std;

int funcion1(int num1, int num2);

int main(){
    int num1, num2;
    cout<<"Ingrese 2 numeros: ";
    cin>>num1;
    cin>>num2;

    int total = funcion1(num1, num2);

    cout<<"El total es : "<<funcion1(num1, num2)<<endl;



    return 0;
}

int funcion1(int num1, int num2){
    int suma = num1 + num2;
    return suma;
}
