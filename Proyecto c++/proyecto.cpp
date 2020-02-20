#include<iostream>
using namespace std;
string datos[5];
int menu(int opcion){
	do{
		cout<<"1.- Introducir nombres"<<endl;
		cout<<"2.- Mostrar nombres"<<endl;
		cout<<"3.- Salir"<<endl;
		
		cout<<" Opcion 1,2 o 3: ";
		cin>>opcion;
		
		if(opcion==1){
			for(int i=0; i<5;i++){
				cout<<"Introduce un nombre"<<i+1<<": ";
				cin>>datos[i];
			}	
		}
		
		if(opcion==2){
			for(int i=0; i<5;i++){
				cout<<" nombres "<<i+1<<"="<<datos[i]<<endl;
			}
			
		}
		
	}while(opcion!=3);
	
}

	

int main(){
	
	//menú
	menu(1);
	
	
	
	return 0;
}
