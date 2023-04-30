#include<iostream>

using namespace std;

int main(){
    string nombre = "Walter ";
    string apellido = "Pleitez";
    string nombreCompleto = nombre.append(apellido);

    cout<<nombreCompleto<<endl;
    cout<<nombreCompleto.size()<<endl;
    cout<<nombreCompleto[8]<<endl;

    return 0;
}