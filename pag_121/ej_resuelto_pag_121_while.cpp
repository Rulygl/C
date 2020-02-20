#include <iostream>

using namespace std;
int main(){
	
	int numero;
	
	cout << " Escribe un numero positivo: ";
	cin >> numero;
	while (numero <0)
	{
		cout << " Ese numero no es positivo." << endl;
		cout << " Escribe otro numero positivo: ";
		cin >> numero;
	}
	return 0;
}
