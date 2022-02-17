#include <iostream>
//Shirly Peralta 20112000781
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char const *argv[]) 
{
	// Datos de entrada
	double subtotal = 0;
	double total = 0;
	double impuesto = 0.15;
		
	cout << "Ingrese el sub total de la factura:";
	cin >> subtotal;
	
	// Proceso
	
	total = subtotal + (subtotal * 0.15);
	
	// Salida
	
	cout << endl;
	cout << "Total a pagar es: " << total;
	
	return 0;
}
