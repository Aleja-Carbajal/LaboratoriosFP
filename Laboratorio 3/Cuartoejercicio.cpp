#include <iostream>
using namespace std;

main (){
    float precio,cant,va;
    string nombre;

    cout << "Total de dinero gastado\n"<<"Ingrese el nombre del producto adquirido: " ;
    cin >>nombre;
    cout << "Ingrese el precio por unidad del producto: $" ;
    cin >>precio;
    cout << "Ingrese la cantidad de productos adquiridos: " ;
    cin >>cant;

    va = precio*cant;

    cout <<"\nTotal de dinero gastado: $"<<va;
    return 0;
}