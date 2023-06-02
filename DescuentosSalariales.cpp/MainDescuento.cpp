#include <iostream>
#include "Lib1.hpp"

using namespace std;

int main()
{
    float salario, salarioTotal;

    cout << "Ingrese su salario: " << endl;
    cin >> salario;

    Impuestos(salario); //salarioAntesTramo

    float salarioAntesTramo = Impuestos(salario);//Almacena salarioConImpuesto

    if (salarioAntesTramo <= 472.0)//Recibe salarioConImpuesto e imprime su salarioTotal, si cumple la condicion
    {
        cout<<salarioAntesTramo<<endl;
    }
    else if (salarioAntesTramo > 472.0 && salarioAntesTramo <= 895.25)
    {                         //Recibe salarioConImpuesto e imprime su salarioTotal, si cumple la condicion
        salarioTotal = Tramo2(salarioAntesTramo);
        cout<<salarioTotal<<endl;
    }
    else if (salarioAntesTramo > 895.25 && salarioAntesTramo <= 2038.10)
    {                          //Recibe salarioConImpuesto e imprime su salarioTotal, si cumple la condicion
        salarioTotal = Tramo3(salarioAntesTramo);
        cout<<salarioTotal<<endl;
    }
    else //Recibe salarioConImpuesto e imprime su salarioTotal, si no cumple alguna condicion
    {
        salarioTotal = Tramo4(salarioAntesTramo);
        cout<<salarioTotal<<endl;
    }

    return 0;
}