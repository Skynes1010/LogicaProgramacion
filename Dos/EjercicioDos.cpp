#include <iostream>
using namespace std;
int main(){
int escritorio;
int escritorios;
string nombre;
cout << "Ingrese nombre de cliente" << endl;
cin >> nombre;
cout << "Ingrese cantidad de escritorios comprados" << endl;
cin >> escritorio;
escritorios = 800000;
if (escritorio<5) {
	cout << nombre << " su compra es por valor de " << escritorio*escritorios << " y su descuento fue " << (escritorios*escritorio)*0.1 << endl;
}else {
	if (escritorio>=5 && escritorio<10) {
	cout << nombre << " su compra es por valor de " << escritorio*escritorios << " y su descuento fue " << (escritorios*escritorio)*0.2 << endl;
} else {
	if (escritorio>=10) {
	cout << nombre << " su compra es por valor de " << escritorio*escritorios << " su descuento fue " << (escritorios*escritorio)*0.4 << endl;
			}
		}
  }
	return 0;
}
