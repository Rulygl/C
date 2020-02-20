#include <iostream>

using namespace std;
void duplicar(int n){
	n = n*2;
}
int main(){
	int numero =5;
	cout << " El numero vale " << numero << endl;
	duplicar(numero);
	cout << " Tras duplicar el numero se convierte en: " << numero << endl;
	return 0;
}



