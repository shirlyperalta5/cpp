#include <iostream> 

using namespace std;

int main()
{
	int nota=0;
	cout<<"Ingrese la nota del estudiante:";
	cin >> nota;
	if (nota > 100 || nota < 0) 
	{
	cout << " Opciones validas de 0 a 100 "; 
	return 0;
	}
	else
	if (nota == 100) 
	{
		cout<< " La nota recibida una A++"<<endl; 
	}
	else
	if (nota >= 95 && nota <= 99)
	{
		cout<< " La nota recibida una A+ " <<endl;
	}
	else
	if (nota >= 90 && nota <= 94)
	{
		cout<< " La nota recibida una A " <<endl;
	}
	else
	if (nota >= 85 && nota <= 89)
	{
		cout<< " La nota recibida una A- " <<endl;
	}
	else
	if (nota >= 80 && nota <= 84)
	{
		cout<< " La nota recibida una B+ " <<endl;
	}
	else
	if (nota >= 75 && nota <= 79)
	{
		cout<< " La nota recibida una B " <<endl;
	}
	else
	if (nota >= 70 && nota <= 74)
	{
		cout<< " La nota recibida una B- " <<endl;
	}
	else
	if (nota >= 65 && nota <= 69)
	{
		cout<< " La nota recibida una C+ " <<endl;
	}
	else
	if (nota >= 60 && nota <= 64)
	{
		cout<< " La nota recibida una C " <<endl;
	}
	else
	if (nota >= 55 && nota <= 59)
	{
		cout<< " La nota recibida una C- " <<endl;
	}
	else
	if (nota >= 50 && nota <= 54)
	{
		cout<< " La nota recibida una D+ " <<endl;
	}
	else
	if (nota >= 45 && nota <= 49)
	{
		cout<< " La nota recibida una D " <<endl;
	}
	else
	if (nota >= 40 && nota <= 44)
	{
		cout<< " La nota recibida una D- " <<endl;
	}
	else
	if (nota >= 35 && nota <= 39)
	{
		cout<< " La nota recibida una E+ " <<endl;
	}
	else
	if (nota >= 30 && nota <= 34)
	{
		cout<< " La nota recibida una E " <<endl;
	}
	else
	if (nota >= 25 && nota <= 29)
	{
		cout<< " La nota recibida una E- " <<endl;
	}
	else
	if (nota >= 20 && nota <= 24)
	{
		cout<< " La nota recibida una F+ " <<endl;
	}
	else
	if (nota >= 15 && nota <= 19)
	{
		cout<< " La nota recibida una F " <<endl;
	}
	else
	if (nota >= 10 && nota <= 14)
	{
		cout<< " La nota recibida una F " <<endl;
	}
	else
	if (nota >= 5 && nota <= 9)
	{
		cout<< " La nota recibida una F- " <<endl;
	}
	else
	if (nota >= 0 && nota <= 4)
	{
		cout<< " La nota recibida una F-- " <<endl;
	}				
	system ("pause");
	return 0;
}



