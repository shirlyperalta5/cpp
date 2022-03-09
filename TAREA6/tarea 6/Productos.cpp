#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system ("cls");
	
	int opcionProducto = 0;
	switch (opcion)
	{
		case 1:
		{
			cout<<"Bebidas calientes"<<endl;
		    cout<<"*****************"<<endl;
		    cout<<"1 - Capuccino "<<endl;
		    cout<<"2 - Expresso" <<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Capuccino - L.40.00",1,40);
					break;
				case 2:
					agregarProducto("1 Expresso - L.30.00",1,30);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 2:
		{
			cout<<"Bebidas frias"<<endl;
			cout<<"*************"<<endl;
			cout<<"1 - Cafe helado "<<endl;
		    cout<<"2 - Licuado de banana " <<endl;
		    cout<<"3 - Jugo de naranja "<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Cafe helado - L.30.00",1,30);
					break;
				case 2:
					agregarProducto("1 Licuado de banana - L.22.00",1,22);
					break;
				case 3:
					agregarProducto("1 Jugo de naranja - L. 20.00",1,20);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 3:
		{
			cout<<"Reposteria"<<endl;
			cout<<"**********"<<endl;
			cout<<"1 - Pie de manzana "<<endl;
		    cout<<"2 - Pan de limon" <<endl;
		    cout<<"3 - Rollo de canela "<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Pie de manzana - L.40.00",1,40);
					break;
				case 2:
					agregarProducto("1 Pan de limon - L.25.00",1,25);
					break;
				case 3:
					agregarProducto("1 Rollo de canela - L.15.00",1,15);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado"<<endl<<endl;
			system("pause");
			
			break;
		}
		
		{
			default:
			break;
		}
		
	}
}
