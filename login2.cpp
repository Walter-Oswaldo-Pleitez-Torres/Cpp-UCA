#include <iostream>
#include <string>
using namespace std;
int main()
{

    int intentos;
    intentos = 0;
    string username = "Darlyn";
    string password = "1234";
    string usuario, contraseña;

    do
    {
        cout << "Ingrese su usuario: ";
        cin >> usuario;
        cout << "Ingrese su contraseña: ";
        cin >> contraseña;
        if (username == usuario && password == contraseña)
        {
            cout << "Acceso concedido. ";
        }  
        else
        {
           cout << "Acceso denegado. ";
        }
        intentos++;

    } while (intentos < 3);

    return 0;
}
