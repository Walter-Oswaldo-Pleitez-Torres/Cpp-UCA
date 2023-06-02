#include <iostream>

using namespace std;

int main(){
    int arrayMinMax[6]={45,50,80,5,4,100}, mayor=0, menor = 100;

    for(int i=0; i<sizeof(arrayMinMax)/sizeof(int); i++){
        if(arrayMinMax[i]>mayor){//El bucle identificara si es maas grande el valor en la variable mayor o el del bucle
            mayor=arrayMinMax[i];//El bucle guardara el mayor valor entre el bucle y el de la variable sobre-escribiendose
        }
        else if(arrayMinMax[i] < menor){//El bucle identificara el valor que no fue mayor que otro
            menor=arrayMinMax[i];//ese valor lo asignara desde el bucle a la variable menor
        }
    }

    cout<<"El Mayor es: "<<mayor<<" el menor es: "<<menor<<endl;

    return 0;
}