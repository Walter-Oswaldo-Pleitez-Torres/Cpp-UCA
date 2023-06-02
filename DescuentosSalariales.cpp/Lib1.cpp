#include "Lib1.hpp"

float Impuestos(float salario)
{
    float ISSS = salario * 0.75;
    float  AFP = salario * 0.875;
    float salarioConImpuesto = salario - (AFP + ISSS);

    return salarioConImpuesto;
}

float Tramo1(float salarioAntesTramo){

    return salarioAntesTramo;
}

float Tramo2(float salarioConImpuesto)
{

    return  (salarioConImpuesto * 0.1) - (472 + 17.67);
}

float Tramo3(float salarioConImpuesto)
{

    return (salarioConImpuesto * 0.2) - (895.25 + 60);
}

float Tramo4(float salarioConImpuesto)
{

    return (salarioConImpuesto * 0.3) - (2038.10 + 288.57);
}

/*


float Tramo1(float salarioAntesTramo){
    float salarioTotal;

    if(salarioAntesTramo<=472){
        salarioTotal = salarioAntesTramo;
    }
    return salarioTotal;
}

float Tramo2(float salarioConImpuesto){
    float salarioTotal;

    if(salarioConImpuesto>472 && salarioConImpuesto<=895.25){
        salarioTotal = (salarioConImpuesto * 0.1) - 472 + 17.67;
        return salarioTotal;
    }
}
float Tramo3(float salarioConImpuesto){
    float salarioTotal;

    if(salarioConImpuesto>895.25 && salarioConImpuesto<=2038.10){
        salarioTotal = (salarioConImpuesto * 0.2) - 895.25 + 60;
        return salarioTotal;
    }
}

float Tramo4(float salarioConImpuesto){
    float salarioTotal;

    if(salarioConImpuesto>2038.10){
        salarioTotal = (salarioConImpuesto * 0.3) - 2038.10 + 288.57;
        return salarioTotal;
    }
}
*/