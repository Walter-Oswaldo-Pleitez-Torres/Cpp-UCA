#include <iostream>

using namespace std;

int main(){
    string autores[3];
    string libros[3];

    for(int i=0; i<3; i++){
        cout<<"Ingrese un autor: ";
        cin>>autores[i];
        cout<<"Ingrese un libro: "<<endl;
        cin>>libros[i];
    }
    cout<<"*************************************"<<endl;
    for(int i=0; i<3; i++){
        cout<<autores[i]<<endl;
        cout<<libros[i]<<endl;
    }


    return 0;
}