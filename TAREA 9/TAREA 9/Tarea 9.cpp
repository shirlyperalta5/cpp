#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;
int main ()
{
	int opcion = 0; 
	int dado1 = 0, dado2 = 0,resultado = 0;	
	
	cout << "Presione 1 para tirar los dados " <<endl;
	cout << "Ingrese 2 para salir del juego "<<endl;
	cout <<endl;
	cin>>opcion;
	cout <<endl;
	
	if (opcion==1){
	srand(time(NULL));
	
	dado1 = rand() % 6 + 1;
	cout << " Dado 1 : "<< dado1<<endl;
	
	dado2 = rand() % 6 + 1;
	cout << " Dado 2 : "<< dado2<<endl;
	
	resultado = dado1 + dado2;
	
	cout << "Usted obtuvo un : "<<resultado<<endl;
	}
	else{
	return 0;
	}
	return 0;
}
