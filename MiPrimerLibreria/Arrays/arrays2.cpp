#include <iostream>

using namespace std;

int main(){
    int MiPrimerArreglo[] = {1,2,3,4,5};

    //OBTENER TAMAÑO EN BYTES
    cout<<"Tamano en bytes: "<<sizeof(MiPrimerArreglo)<<endl;
    //OBTENER TAMAÑO EN ELEMENTOS
    int dimensionArreglo = sizeof(MiPrimerArreglo) / sizeof(int);
    cout<<"Tamano en cant de elementos: "<<sizeof(MiPrimerArreglo) / sizeof(int)<<endl;

    //BUCLE PARA RECORRER ARREGLO
    for(int i=0; i<dimensionArreglo; i++){
        cout<<"El valor es: "<<MiPrimerArreglo[i]<<endl;
    }

    return 0;
}
