#include <iostream> 
using namespace std;

int main(int argc, char** argv) {
	int opcion = 0;
while (true) {
		cout  << "****" <<endl;
		cout  << "MENU" <<endl;
		cout  << "****" <<endl;

		cout  << endl;
		cout  << "1  - Café y Granitas" <<endl;
		cout  << "2 Reposteria" <<endl;
		cout  << "0 -Salir" <<endl;

		cout << "Ingrese una opción del menu:" <<endl;
		cin >> opcion;
		
		if (opcion == 1) {
			system("cls");
			cout << "estas en el menú de café y granitas";
			system("pause");
}
		if (opcion == 2 ){
			system("cls");
			cout << "estas en el menú de reposteria";
			system("pause");
}
		if (opcion == 0 ){
		    break;
		}
	}
	cout <<  endl;
	cout << "Saliste del sistema";

	return 0;
}

