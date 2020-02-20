#include <iostream>

using namespace std;
int main(){
	
	int numero;
	
	do
	{
	cout << " Escribe un numero positivo: ";
	cin >> numero;	
	if(numero<0)
	cout << " Ese numero no es positivo." << endl;	
		}	
	
	while (numero <0);
	
	return 0;
}
