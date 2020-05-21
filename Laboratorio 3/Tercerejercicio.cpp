#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

main(){
    float a,b,c,x1,x2;
    cout <<"\nFormula cuadratica solucion"<<"\nIngrese el valor de a: ";
    cin >> a;
    cout <<"\nIngrese el valor de b: ";
    cin >> b;
    cout <<"\nIngrese el valor de c: ";
    cin >> c;

    x1 = (-b+(sqrt((b*b)-(4*a*c)))) / (2*a);
    x2 = (-b-(sqrt((b*b)-(4*a*c)))) / (2*a);

    cout<<"El resultado es:\n "<<"x1 = "<<x1<<"\nx2 = "<<x2 ; 

    return 0;
}