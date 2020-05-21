#include <iostream>
#include <string>
using namespace std;

int main (){

    string pal;
    cout <<endl<<"Ingrese una palabra solo en minusculas: "<<endl;
    cin >> pal;
    int posi = pal.length();
    char posi1=pal.at(0), posi2=pal.at(posi-1);

     

    if (posi1==posi2)
     {
       cout<<endl<<"La palabra si inicia y finaliza con la misma letra"<<endl;
     }
     
     else {
         cout<<endl<<"La palabra no inicia ni finaliza con la misma letra"<<endl;
     }
     
}