#include "iostream"
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;

main (){
    float p,r,a;

    cout <<"\nConocer el area y perimetro de un circulo"<<"\nIngrese el radio del circulo: ";
    cin >> r;
    p = 2*M_PI*r ;
    a = M_PI* pow(r,2);

    cout <<"\nEl area del circulo es: "<<a<<"\nEl perimetro del circulo es: "<<p;
    return 0;
}