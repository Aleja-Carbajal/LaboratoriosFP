#include <iostream>
using namespace std;

//Programa que lee la fecha ingresada por el ususario y muestra la fecha un dia después


//Función que devuelve valor true si el año ingresado es bisiesto
bool si_bisiesto (int year){
    
    if (year%4==0 && year%100!=0 || year%400==0){ 
        return true;
    }
}
    

//Función que devuelve los dias límites según el mes ingresado 
int dias_segunmes (int mes, int year){
    int dias = 31; //Se establece el valor límite de dias que puede llegar a tener un mes

    if (mes==4 || mes==6 || mes==9 || mes==11)//Si el mes ingresado es uno de estos, los dias cambian a 30
    {
       dias = 30;
    }else if (mes == 2)//Si es febrero e tiene solo 28 dias y si es febrero bisisesto 29
    {   
        if (si_bisiesto(year))//Función del año bisisesto
        {
            dias = 29;
        }else{
            dias = 28;
        }
        
    } return dias;
}



int main(){
    int dia, mes, year;
    
    cout <<endl<<endl<<"----Bienvenido al sistema----"<<endl;
    cout <<"Ingrese la fecha segun se indica";

    cout <<endl<<"Dia: ";                   cin >>dia;
    cout <<"Mes: ";                         cin >>mes;
    cout <<"A"<<char(164)<<"o: ";           cin >>year;

    dia++;//Suma 1 al dia

    if (dia>dias_segunmes(mes, year))
    {
       dia = 1;//Se resetea la fecha y se aumenta en 1 el mes
       mes++;
       if (mes>12)//El mes es diciembre pasa a enero sumando 1 al año
       {
           mes = 1;
           year++;      
       } 
    }
    cout <<endl<<endl<<"La fecha luego de un dia transcurrido es: "<<endl;

    //Condiciones para que la fecha se muestre con dos numeros en mes y día. ej. 1/1/2002 a 01/01/2002
    cout <<"----";
    if (dia<10) cout <<0; cout <<dia<<"/";
    if (mes<10) cout <<0; cout <<mes<<"/";
    cout <<year<<endl<<endl;
     

    return 0;

}

