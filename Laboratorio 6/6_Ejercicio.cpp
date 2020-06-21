#include <iostream>
using namespace std;



int main () {
    int numeros[10] = {1, 1, 1, 3, 8, 5, 4, 5, 3, 8};
    int n;
    int rep = 0;

    cout <<endl<<endl<<"Ingrese un numero entero entre 1 y 10 para saber cuantas veces se repite este dentro de un arreglo"<<endl;
    cin  >>n;

    for (int i = 0; i < 10; i++)
    {
       if (n==numeros[i])
       {
         ++rep;
       }   
    }
    
    if (rep==0)
    {
        cout <<endl<<"El numero ingresado no se repite ninguna vez dentro del arreglo"<<endl<<endl;
    }
    else
    {
        cout <<endl<<"El numero ingresado se repite: "<<rep<<" veces."<<endl<<endl;
    }
     return 0;
    

}