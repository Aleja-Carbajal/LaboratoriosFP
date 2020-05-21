
#include <iostream>

using namespace std;


main(){
    float a,b,c,prom;
    
    cout << "\nPromediar tres numeros enteros"<< endl<<"Ingrese el primer numero: ";
    cin >> a;
    cout <<"Ingrese el segundo numero: ";
    cin >> b;
    cout <<"Ingrese el tercer numero: ";
    cin >> c;

    prom= (a+b+c)/3;
    cout <<"El promedio de "<<a<<", "<<b<<" y "<<c<<" es: "<<prom;
    return 0;
}