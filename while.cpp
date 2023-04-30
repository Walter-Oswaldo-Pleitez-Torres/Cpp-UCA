#include<iostream>

using namespace std;

int main(){
    int i = 1, suma=0, total;

    while(i<=5){
        suma +=i;

        i++;
    }
    
    total=suma*3;
    cout<<total<<endl;

    return 0;
}