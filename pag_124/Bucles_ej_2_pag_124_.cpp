#include <iostream>
using namespace std;
int main(){
	int n = 26;		
	cout<<" Estos son los numeros pares menores de 26 "<< endl ;
	while((n <= 26)&&(n >=10)&&(n%2==0 )){
		cout << n << endl;
		n = n-2;
	
	
	}
	
	return 0;
}
