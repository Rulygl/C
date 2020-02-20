#include <iostream>
using namespace std;
int main(){
	
	int usuario,contrasena;
	
	
	
	cout<< " dime tu usuario:";
	cin>> usuario;
	cout<< " dime la contrasena:" ;
	cin>> contrasena;
	if ((usuario == 1024)&&(contrasena == 7890)){
		cout << "el usuario y contrasena son correctos";
	}
	while(!(usuario == 1024)||(!(contrasena == 7890))){
	cout << " el usuario o la contrasena no son correctos " << endl;	
	cout<< " dime tu usuario:";
	cin>> usuario;
	cout<< " dime la contrasena:" ;
	cin>> contrasena;
		if ((usuario == 1024)&&(contrasena == 7890)){
		cout << "el usuario y contrasena son correctos";
	}
}
	return 0;

}

