#include <iostream>

using namespace std;

int main(){
    int array1[] = {1,4,7,78,45,16,24};
    int cantArray = sizeof(array1) / sizeof(int);

    for(int i=0;i<cantArray;i++){
        if(array1[i] % 2 == 0){
            cout<<array1[i]<<endl;
        }
    }

    return 0;
}