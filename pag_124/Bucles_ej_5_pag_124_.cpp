#include <iostream>
using namespace std;
int main(){
	int n = 58;
	int n1;		
	cout << " Trata de adivinar el numero del 1 al 100 " << endl ;
	cout << " Dime cual es tu numero elegido: ";
	cin >> n1 ;	
	for(int i = 0;i < 5; i ++){
	if(n1 > n){
	cout << " Te estas pasando " << endl;
	cout << " Tienes otra oportunidad, dime cual es tu numero: ";
	cin >> n1 ;
}
	if(n1 < n){
	cout << " Te estas quedando corto " << endl;
	cout << " Tienes otra oportunidad, dime cual es tu numero: ";
	cin >> n1 ;
}
	if(n1 == n){
		i =5;
	cout << " Has acertado ";
}
}
	return 0;
}
