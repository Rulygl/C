#include <iostream>

using namespace std;
float mayor(float n1, float n2){
	if(n1 > n2)
	return n1;
	else 
	return n2;
}
int main(){
	
	float numero1, numero2;
	cout << " dime un numero: ";
	cin >> numero1;
	cout << " dime un otro: ";
	cin >> numero2;
	cout << " El mayor es: " << mayor(numero1, numero2) << endl;
	return 0;
}



