#include <iostream>
using namespace std;

int main (){
    int num1, num2, res;
    cout <<"Verificar si un numero es divisible entre otro"<<endl;
    cout <<"Ingrese el primer numero: "<<endl;
    cin >> num1;
    cout <<endl<<"Ingrese el segundo numero: "<<endl;
    cin >> num2;
    res = num1%num2;

    if (res==0)
    {
        cout << "Los numeros si son divisibles";
     }
    else
    {
        cout <<"No son divisibles";
    }
    

}