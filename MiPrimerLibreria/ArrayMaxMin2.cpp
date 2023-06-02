#include <iostream>

using namespace std;

int main(){
    int arrayMinMax[6], mayor= arrayMinMax[0], menor = arrayMinMax[0];

    for(int i=0; i<sizeof(arrayMinMax)/sizeof(int); i++){
        cout<<"Ingrese un numero: ";
        cin>>arrayMinMax[i];
    }

    for(int i=0; i<sizeof(arrayMinMax)/sizeof(int); i++){
        //cout<<arrayMinMax[i]<<endl;
        if(arrayMinMax[i] >mayor){
            mayor = arrayMinMax[i];
        }
        else if(arrayMinMax[i] < menor){
            menor = arrayMinMax[i]; 
        }

    }

    cout<<"El Mayor es: "<<mayor<<" el menor es: "<<menor<<endl;

    return 0;
}