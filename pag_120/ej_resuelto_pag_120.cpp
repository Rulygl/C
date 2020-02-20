#include <iostream>
#include <cmath>

using namespace std;
int main(){
	
	int numero;
	cout<< "introduce un numero del 1 al 5: ";
	cin >> numero ;
	
	switch (numero)
	{
		case 1: cout << "uno";
		break ;
			case 2: cout << "dos";
		break ;
			case 3: cout << "tres";
		break ;
			case 4: cout << "cuatro";
		break ;
			case 5: cout << "cinco";
		break ;
		default: cout<< "valor incorrecto!" ;
	}	
	return 0;
}
