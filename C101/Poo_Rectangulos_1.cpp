#include <iostream>
#include<stdio.h>
using namespace std;

class rectangulo{
	public:
		int ancho, alto;
		
	public:
		void perimetro(){
			int p = 2*(ancho + alto);
			cout << " El perimetro de un rectangulo de: " << ancho << " * " << alto << " es: " << p << endl;
			};
			void area (){
				int a = ancho*alto;
				cout << " El area de un rectangulo de: " << ancho << " * " << alto << " es: " << a << endl;
			};
	
		
};
int main(){
	rectangulo r1;
	rectangulo r2;
	r1.ancho = 2;
	r1.alto = 4;
	r1.perimetro();
	
	
	r1.ancho = 6;
	r1.perimetro();
	
	r2.ancho = 2; 
	r2.alto = 4;
	r2.perimetro();
	r2.area();
	
	system("pause");
	return 0;

}

