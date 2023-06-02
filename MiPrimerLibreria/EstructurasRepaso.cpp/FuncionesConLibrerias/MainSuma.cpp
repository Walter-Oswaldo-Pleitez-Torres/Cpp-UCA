#include <iostream>
#include "LibSuma.hpp"

using namespace std;

int main(){
    int num1, num2;

    cout<<"Ingrese un numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese otro numero: "<<endl;
    cin>>num2;

    suma(num1, num2);

    return 0;
}