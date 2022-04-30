/*Alumna: Shirly Sarai Peralta Reyes
/*Numero de cuenta: 20112000781

Productos:
*/
#include <iostream>

using namespace std;	

void Productos();
{
	string nom_prod=0,sabor=0, cant=0,precio=0,tot_pagar=0,direc=0,tel=0,salir=1;
	
cout<<"Productos:"<<endl;
	cout<<"Nombre			Presentación	Precio"<<endl;
	cout<<"1)Ice Cream		Caja entera		L.390.00"<<endl;
	cout<<"2)Ice Cream		Media entera	L.205.00"<<endl;
	cout<<"3)Ice Cream		1/2 Galón		L.155.00"<<endl;
	cout<<"Ingrese el número del producto deseado"<<endl;
	cin>>nom_prod;
	
	if (nom_prod==1)
	{
		cout<<"Caja entera de Ice Cream"<<endl<<endl;
		cout<<"390.00"<<endl<<endl;
	}
	if (nom_prod==2)
	{
		cout<<"Media caja de Ice Cream"<<endl<<endl;	
		cout<<"205.00"<<endl<<endl;
	}
	if (nom_prod==3)
	{
		cout<<"Medio galon de Ice Cream"<<endl<<endl;	
		cout<<"155.00"<<endl<<endl;
	}
	
	cout<<"Sabores disponibles 1)Napolitano 2)Huracán 3)Zebra 4)Queso con fresa"<<endl;
	cout<<"Ingrese el sabor deseado"<<endl;
	cin>>sabor;
	
	if (sabor==1)
	{
		cout<<"Napolitano"<<endl<<endl;
	}
	if (sabor==2)
	{
		cout<<"Huracán"<<endl<<endl;	
	}
	if (sabor==3)
	{
		cout<<"Zebra"<<endl<<endl;	
	}
		if (sabor==4)
	{
		cout<<"Queso con fresa"<<endl<<endl;	
	}
	
	cout<<"Ingrese la cantidad"<<endl;
	cin>>cant;


