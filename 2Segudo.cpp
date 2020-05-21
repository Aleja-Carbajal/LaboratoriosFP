#include <iostream>
using namespace std;

int main (){

    int num, div;
    cout <<"Saber si un numero es par o impar"<<endl;
    cout <<"Ingrese el numero: "<<endl;
    cin >> num;
    div = num%2;

    if (div==0)
    {
        cout << "Si es par";
    }
    else
    {
        cout <<"No es par";
    }
    

    
    
}