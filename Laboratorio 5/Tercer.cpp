#include <iostream>
using namespace std;

int main (){
    int va,res;
    cout <<"Conocer si un numero es positivo, neativo o cero"<< endl;
    cout << "Ingrese el numero: "<<endl;
    cin >> va;
    
    if (va<0)
    {
        cout <<"El numero es negativo"<<endl;
    }
    else if (va==0)
    {
        cout << "El numero es igual a cero";
    }
    else
    {
        cout << "El numero es positivo"<<endl;
    }
    
}