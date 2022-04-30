/*Alumna: Shirly Sarai Peralta Reyes
/*Numero de cuenta: 20112000781

Productos:
*/
using namespace std;

void menu()
{
	set locale (LC_TYPE, "Spanich")
	string nombre,apellido,nombreapellido;
	Int nom_prod=0,sabor=0, cant=0,precio=0,tot_pagar=0,direc=0,tel=0,salir=1;
	
	system color ("E0");
	cout<<"                     ***Helados Hermanos Peralta***"<<endl<<endl;
	
	while (salir==1)
	{
		cout<<"Ingrese Primer Nombre:"<<endl;
	cin>>nombre;
		
	cout<<endl;
	cout<<"Ingrese Segundo Apellido:"<<endl;
	cin>>apellido;
	
	nombreapellido=nombre+""+apellido;
	
	cout<<endl;
	cout<<"Hola! "nombreapellido<<endl;
	
	productos ();
	cout<<endl;
	cout<<"¿Desea realizar otra compra?"<<endl;
	cout<<"1)SI	2)NO"<<endl;
	cin >>salir
		{
		if (salir==1)
		system ("cls");
		else
		system ("exit") 
		}
	}
	
	pedido=cant+""+nom_prod+""+sabor+cant;
	cout<<endl;
	cout<<"Su pedido es :"<<pedido<<endl<<endl;
		
	tot_pagar=cant*precio
	cout<<"Su Total a pagar es: "<<tot_pagar<<endl;
	
	cout<<"Ingrese la dirección exacta:"<<endl;
	cin>>direc;
	
	cout<<"Ingrese su telefóno:"<<endl;
	cin>>tel;
	
	cout<<"Tarifa por envío es de L. 50.00"<<endl<<endl;	
	
	cout<<"Tiempo aproximado de entrega 15 minutos"<<endl<<endl;	
	
	cout<<"Gracias por tu compra"<<endl<<endl;
}

