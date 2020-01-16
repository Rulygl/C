#include <iostream>
#include <cmath>

using namespace std;
int main(){
	
	int n1 = 8;
	double raiz = sqrt(n1);
	
	cout<< "la raiz de " <<n1 << "es" << raiz << endl;
	
	float anguloGrados = 45;
	float PI = 3.14159265f;
	double anguloRadianes = anguloGrados * PI / 180;
	cout << "el coseno de " << anguloGrados << "es" << cos(anguloRadianes) << endl;
	
	
	
	return 0;
}
