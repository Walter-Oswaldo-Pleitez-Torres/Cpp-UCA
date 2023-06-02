#include <iostream>

using namespace std;

int main(){
    int continuar =1;

    do{
        cout<<"******** repetir menu ********"<<endl;
        //Menu

        cout<<"Si desea continuar ingrese 1, sino ingrese cualquier otro numero"<<endl;
        cin>>continuar;

        if(continuar == 1){
            cout<<"Sigue en el programa"<<endl;
        }
        else{
            cout<<"Ud ha salido del programa"<<endl;
        }
    }while(continuar == 1);

    return 0; 
}