#include <iostream> 
using namespace std;

int main(int argc, char** argv) 
{
	int opcion = 0;
while (true) {
		cout  << "****" <<endl;
		cout  << "MENU" <<endl;
		cout  << "****" <<endl;

		cout  << endl;
		cout  << "1  - Caf� y Granitas" <<endl;
		cout  << "2 Reposteria" <<endl;
		cout  << "0 -Salir" <<endl;

		cout  << "Ingrese una opcion del menu: ";
		cin >> opcion;
		
		if (opcion == 0) {
		break;
		}
		
		switch (opcion)
		{
			case 1:
			{
			system("cls");
			cout << "estas en el men� de caf� y granitas" << endl;
			system("pause");
			break;
	}
			case 2:	{
			system("cls");
			cout << "estas en el men� de reposteria" << endl;
			system("pause");
			break;
	}
	default:
	{
			cout << "Ingrese una opci�n v�lida (0, 1, 2)" << endl;
			system("pause");
			break;
				
		}		
	}
}
cout << endl;
cout << "Saliste del sistema";

return 0;
	
}
