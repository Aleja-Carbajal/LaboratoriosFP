#include <iostream>
using namespace std;

//Programa que nos imprime el mcd de dos números

//Función para conocer el mcd con el método de Euclides
int mcd_2num (int mcd) { //Función tipo entera por que se reotnará el valor de mcd
    int num1, num2, res;

    cout <<endl<<"Ingrese el mayor de los dos numeros: "; //Aclarar al usuario que ingrese el numero mayor antes
    cin  >>num1;
    cout <<endl<<"Ingrese el menor de los dos numeros: ";
    cin  >>num2;

    do { 
        res = num1%num2;
            if (res!=0)
            {
                num1 = num2;
                num2 = res;
            }
    }while (res!=0);//Se repetira la división hasta que el residuo==0 
        {  
            cout <<endl<<endl<<"El mcd de los dos numero es: "<<num2<<endl;//Imprime resultado en pantalla   
            return num2; //Se retorna el mcd
        }      
}

int main(){
    int mcd;
    //Inicio del programa 
    cout <<endl<<endl<<"----Bienvenido al sistema para conocer el minimo comun divisor de dos numeros----"<<endl<<endl;
    mcd_2num(mcd); //Se llama a la función que realiza el desarrollo del mcd
    cout <<endl<<"---Gracias por usar nuestro sistema. Feliz dia"<<endl<<endl;

    return 0;
}

