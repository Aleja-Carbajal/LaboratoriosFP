#include <iostream>
#include <string>
using namespace std;

int main (){

    string pa;
    cout <<endl<<"Ingrese una palabra solo en minusculas: "<<endl;
    cin >> pa;
    int posi = pa.length();
    char posi1=pa.at(0), posi2=pa.at(posi-1);

     

    if (posi1==posi2)
     {
       cout<<endl<<"La palabra si inicia y finaliza con la misma letra"<<endl;
     }
     
     else {
         cout<<endl<<"La palabra no inicia ni finaliza con la misma letra"<<endl;
     }
     
}