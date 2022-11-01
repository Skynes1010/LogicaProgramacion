#include <iostream>
using namespace std;
int main(){
string nombre;
int salario;
int horas;
  cout << "Ingrese nombre empleado: " << endl;
  cin >> nombre;
  cout << "Ingrese salario por hora: " << endl;
  cin >> salario;
  cout << "Ingrese horas trabajadas: " << endl;
  cin >> horas;

  int trabajo = salario * horas;

  if (trabajo >= 450000){
    cout <<"Su nombre es " <<nombre << " y su salario es: "<<trabajo<<endl;
  }else{
    cout <<"Su nombre es: "<<nombre << endl;
  } 
}