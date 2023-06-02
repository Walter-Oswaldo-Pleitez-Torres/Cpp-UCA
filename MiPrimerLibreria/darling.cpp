#include <iostream>
using namespace std;

int main()
{
    string autor[3];
    string libros[3];

    
    for (int i = 0; i < 3 ; i++)
    {
        cout<<"Ingrese un autor a almacenar";
        cin>>autor[i];
        cout<<"Ingrese un libro a almacenar";
        cin>>libros[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<autor[i]<<endl;
        cout<<libros[i]<<endl;
    }
    

    return 0;
}