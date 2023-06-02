#include <iostream>

using namespace std;

int main()
{
    int array1[5];
    int cantArray = sizeof(array1) / sizeof(int);

    for (int i = 0; i < cantArray; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> array1[i];
    }

    cout << "Los pares de los numeros ingresados son: " << endl;
    for (int i = 0; i < cantArray; i++)
    {
        if (array1[i] % 2 == 0)
        {
            cout << array1[i] << endl;
        }
    }

    return 0;
}