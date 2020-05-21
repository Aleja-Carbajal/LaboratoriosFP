#include <iostream>
#include <string>
using namespace std;

int main (){
    string pa;
    cout <<endl<<"Ingrese una palabra: "<<endl;
    cin >> pa;
    int par, car = pa.length();
    par = car%2;


    if (car<=10 && par==0)
    {
        cout <<endl<<"La palabra tiene 10 o menos caracteres y su longitud es par"<<endl;
    
    }
    else if(car<=10 && par!=0)
        {
        cout <<endl<< "La palabra tiene 10 o menos caracteres y su longitud es impar"<<endl;
    }
    else if (car>10 && par==0)
         {
        cout <<endl<<"La palabra tiene mas de 10 caracteres y su longitud es par"<<endl;
    }
    else {
        cout <<endl<<"La palabra tiene mas de 10 caracteres y su longitud es impar"<<endl;
    }



}