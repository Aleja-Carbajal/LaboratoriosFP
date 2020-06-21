#include <iostream>

using namespace std;


int main (){
     
    int a[5];
    int b[5];
    int c[5];


    cout <<endl<<"Ingrese 5 numeros para formar el primer arreglo"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout <<"Numero:";
        cin  >>a[i];
        
    }

     cout <<endl<<"Ingrese 5 numeros para formar el segundo arreglo"<<endl;

     for (int i = 0; i < 5; i++)
    {
        cout <<"Numero:";
        cin  >>b[i];
       
    }

    cout <<endl<<"La suma de los numeros segun sus posiciones de los arreglos anteriores es: ";
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    cout <<endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<endl<<"( "<<c[i]<<" )";
    }
    
    cout <<endl;
     return 0; 
     //Sigo estudiando el tema de los punteros y eso. Intenté hacerlo con funciones, pero se me acabo el tiempo.
     //Seguiré revisando esos temas hasta que los entienda 100%
}