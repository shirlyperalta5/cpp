#include <iostream>
// Shirly Peralta 20112000781
using namespace std;

int main()
{
	
	float variable1 = 0, variable2 = 0, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout << " Ingrese la variable 1 : "<<endl;
	cin >> variable1;
	
	cout << " Ingrese la variable 2 : "<<endl;
	cin >> variable2;
	
	suma = variable1 + variable2;
	resta = variable1 - variable2;
	multiplicacion = variable1 * variable2;
	division = variable1 / variable2;
		
	cout << " La suma de ambas variables es de : " << suma <<endl;	
	cout << " La resta de ambas variables es de  : " << resta <<endl;
	cout << " La multiplicacion de ambas variables es de : " << multiplicacion <<endl;
	cout << " La division de ambas variables es de :  " << division <<endl;
	
	
	system ("pause");
	return 0;
}
