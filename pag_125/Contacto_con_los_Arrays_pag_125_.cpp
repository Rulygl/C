#include <iostream>
using namespace std;
int main(){
	int datos[5] = {-200,150,-324,-658,2347};
	int suma = 0;
	for(int i =0; i <= 4; i++)
		suma += datos[i];
		
		cout << " Su suma es: " << suma ;
	return 0;
}
