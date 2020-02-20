#include <iostream>
using namespace std;
int main(){
		
	int n;
	cout << " Introduzca su contrasena de 4 digitos: " ;
	cin >> n ;	
	while(!(n == 7890)){
	cout << " Esa no es su contrasena, " << endl ;
	cout<<" Introduzca de nuevo su contrasena de 4 digitos: "<< endl ;
	cin >> n;
	}
	if(n == 7890){
	cout<< "su contrasena es correcta " ;
	}
	
	return 0;
}
