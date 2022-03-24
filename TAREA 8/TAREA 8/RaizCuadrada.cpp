#include<iostream>
#include <math.h>

using namespace std;

void RaizCuadrada()
{
	float x = 0; 
	float Respuesta = 0;
	
	cout<<"PROGRAMA QUE CALCULA LA RAIZ CUADRADA"<<endl;
	
	cout<<"Ingrese el numero al que desea calcular la raiz cuadrada : "<<endl;
	cin>>x;
	
	Respuesta = sqrt(x);
	
	cout<<"La raiz cuadrada es : "<<Respuesta<<endl;
	system("pause");
}
