# include <iostream>

using namespace std;

double subtotal;
double impuesto = 0,totalPagar = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n' ;
	subtotal = subtotal + (cantidad * precio);
	impuesto = subtotal * 0.15;
	totalPagar= subtotal + impuesto;
}

 void imprimirFactura()
 {
 	system ("cls");
 	cout<<"*******"<<endl;
 	cout<<"Factura"<<endl;
 	cout<<"*******"<<endl;
 	cout <<endl;
 	
 	cout<<"Productos: "<<endl;
	cout<< listaProductos;
 	
 	cout<<endl;
	cout<<"El Subtotal es de : "<<subtotal;
	cout<<endl;
	cout<<"El impuesto es de: "<<impuesto;
	cout<<endl;
	cout<<"El Total a pagar es de : "<<totalPagar;
	cout<<endl;
	
	system("pause");
 }
