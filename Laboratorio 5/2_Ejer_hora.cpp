#include <iostream>
using namespace std;

//Programa que lee la hora ingresada por el usuario y muestra la hora luego de un segundo transcurrido

int main(){

    int h, m, s;//hora, minuto, segundo

    cout <<endl<<endl<<"----Bienvenido al sistema----"<<endl;
    cout <<"Por favor ingrese la hora en formato de 24 horas";
    cout <<endl<<"--Horas: "; cin >>h; 
    cout <<"--Minutos: "; cin >>m;
    cout <<"--Segundos: "; cin >>s;

    s = s + 1; //Suma uno a los segundos
    
    if (s>=60)//Si los segundos llegan a 60 se aumenta 1 a los minutos y se reset los segundos
    {
       s = 0;
       m = m + 1; 

       if (m>=60)//Si los minutos llegan a 60 se aumenta 1 a la hora y se reset los minutos
       {
          m = 0;
          h = h + 1; 
          
          if (h>=24)//Si las horas llegan a 24 se reset las horas
          {
             h = 0;
          }
       }  
    }

    cout <<endl<<endl<<"La hora luego de un segundo transcurrido es: "<<endl;

    //Condiciones para que la hora se muestre con dos numeros. ej. 1:1:1 a 01:01:01
    cout <<"----";
    if (h<10) cout <<0; cout <<h<<":";
    if (m<10) cout <<0; cout <<m<<":";
    if (s<10) cout <<0; cout <<s<<endl<<endl; 
    

    return 0;

}