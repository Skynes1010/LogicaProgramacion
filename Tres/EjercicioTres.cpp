#include <iostream>
using namespace std;
float promedio ;
int programa, credito, creditoT, Descuento1, PrecioFinal, porcentaje ;

int descuento (int Numcreditos, int porcentaje){
  creditoT = credito*Numcreditos;
  Descuento1 = (creditoT*porcentaje)/100;
  PrecioFinal = creditoT-Descuento1;
  return PrecioFinal;
}
int main(){
  cout<< "\n 1. Pregrado \n 2. Posgrado \n";

cin >> programa;

  cout<< "Cuál es tu promedio(decimales)";
  cin>> promedio;

  switch(programa){
    case 1:
      
      credito = 50000;
      if(promedio >4.5){
      cout <<  "El precio de la carrera con el 25% de descuento:" << descuento(28,25);
        if (promedio <4.5 && promedio >=4.0){
      cout<<"El precio de la carrera con el 10% de descuento:" << descuento(25,10);
      } if (promedio <4.0 && promedio >=3.5){
        cout << "El precio de la carrera es de:"<< (creditoT = credito*20);
      } if (promedio <3.5 && promedio >=2.5){
        cout << "El precio de la carrera es de:"<< (creditoT = credito*15);
      }
      
      }else{
        cout<< "No puede matricularse, muy peye sumercé";
      }
    
    break;
    case 2:
    credito=300000;

    if( promedio >= 4.5){
      cout << "el precio de la carrera con el 25% de descuento: "<< descuento(20,20);
    }else{
      cout << "el precio de la carrera es de: $"<< (creditoT = credito*10);
    }
    break;
    default :
      cout << "Error a elegir programa";
    break;
    
    
    
  }


}

