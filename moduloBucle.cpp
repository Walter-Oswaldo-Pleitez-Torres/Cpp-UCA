#include<iostream>

using namespace std;

int main(){
    int pares=0, impares=0;;

   for(int i=1; i<=10; i++){
        bool condicion = i % 2==0; //CONDICION PARA PARES
        if(condicion){
            pares+=i; 
            cout<<"numero par: "<<i<<endl;
        }
        else{
            impares+=i; 
            cout<<"numero impar: "<<i<<endl;
        }
    }
    cout<<"La suma de pares es: "<<pares<<endl;
    cout<<"La suma impares es: "<<impares<<endl;

    return 0;
}