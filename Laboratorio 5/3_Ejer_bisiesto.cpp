#include <iostream>
using namespace std;

//Programa que me diga si un año es bisiesto o no lo es

//Función en la que se desarrollan las pruebas 
bool bisiesto_pru1 (int y){//y== year
    
    cout <<endl<<"Ingrese el a"<<char(164)<<"o para saber si este es bisiesto"<<endl;
    cin  >>y;


    if (y%4==0 && y%100!=0 || y%400==0){ //Año debe ser divisible entre 4 y no entre 100. O también disivisible entre 400
        return true;

    }else{ //Si el año no cumple las condiciones anteriores    
       return false;
     }  
    } 

//MAIN
int main (){
    int y;

    cout <<endl<< "Bienvenido al sistema de a"<<char(164)<<"os."<<endl;
    bool valor=bisiesto_pru1(y);//Función incluida

    if (valor==true)
    {
        cout <<"El a"<<char(164)<<"o es bisiesto."<<endl;
    }
    else
    {
        cout <<"El a"<<char(164)<<"o no es bisiesto."<<endl;
    }
    
    
    cout <<"Gracias por usar nuestro sistema. Feliz dia."<<endl<<endl;

    return 0;

}