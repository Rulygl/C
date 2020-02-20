#include <iostream>

using namespace std;
void duplicar(int &n){
	n = n*2;
}
int main(){
	int numero ;
	cout << " Dime un numero: "; 
	cin >> numero;
	duplicar(numero);
	cout << " Tras duplicar el numero se convierte en: " << numero << endl;
	return 0;
}



