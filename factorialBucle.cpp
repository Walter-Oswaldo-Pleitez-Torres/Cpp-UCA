#include<iostream>

using namespace std;

int main(){
    int numero, factorial;

    cout<<"ingrese un numero: "<<endl;
    cin>>numero;

    /*for(int i=1; i<=3; i++){
        factorial *= i;
    }
    cout<<"Factorial es: "<<factorial<<endl;*/

    for(int i=1; i<=numero; i++){ //FACTORIAL DINAMICO (PENDIENTE)
        factorial *= i;
    }
    
        cout<<"El factorial es: "<<factorial<<endl;

    return 0;
}