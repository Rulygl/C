#include <iostream>
using namespace std;
int main(){
	int n1, n2, n3, n4;		
	int suma;

		cout << " Dime un numero POSITIVO: " ;
		cin >> n1 ;
		cout<< " dime otro numero positivo: " ;
		cin >> n2 ;
		cout<< " dime otro numero positivo: " ;
		cin >> n3 ;	
		cout<< " dime otro numero positivo: " ;
		cin >> n4 ;
	
		
		

	if((n1 >= 1)&&(n2 >= 1)&&(n3 >= 1)&&(n4 >= 1)){
	
	suma = n1 + n2 + n3 + n4;
	cout << suma ;
}
	return 0;
}
