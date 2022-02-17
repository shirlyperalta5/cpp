#include <iostream>

using namespace std;

int main()
{
	
	float total=0, subtotal=0,impuesto=0;
	
	char sinpago;
	
	cout <<"Ingrese el valor de la compra:"<<endl;
	cin>>subtotal;
	
	cout << " la factura esta excenta de impuesto? s/n:"<<endl;
	cin >>sinpago;
	if(sinpago=='n'||sinpago=='N')
	{	
	impuesto=subtotal*0.15;
	total=subtotal+impuesto;
	}
	else
	if(sinpago=='s'||sinpago=='S'){
	total=subtotal;
	}
cout << " el total a pagar es de:"<<total <<endl;
			
	system ("pause");
	return 0;
}


