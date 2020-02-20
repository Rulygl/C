/*Este es el proyecto de Víctor Bahillo y Samuel Botrán de 2ºBACH B del IES MARÍA MOLINER.
El proyecto consiste en un menú con distintas opciones, entre ellas una calculadora con su consiguiente submenú
con opciones como la resta, suma o multiplicación, también hay un conversor de distintas unidades y un calculador de áreas y
perímetros de círculos y rectángulos*/





#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Declara las funciones de perimetro y area del rectangulo y el circulo 

float perimetroCuadrado(float, float );
float areaRectangulo(float , float );
float perimetroCirculo(float);
float areaCirculo(float);

//Define que hace cada función, con dos parámetros de entrada y con uno de salida

float  perimetroRectangulo(float ancho, float largo){
	float p = 2*(ancho+largo);
	return p;
}
float areaRectangulo(float ancho, float largo) {
	float a = ancho*largo;
	return a;
}

//Define que hace cada función, con un parámetro de entrada y con uno de salida

float  perimetroCirculo(float radio){
	float p = 2*3.1416*radio;
	return p;
}
float areaCirculo(float radio) {
	float a = 3.1416*(radio*radio);
	return a;
}

//Define que hace cada función de la calculadora

float  suma(float n1, float n2){
	float s = n1+n2;
	return s;
}
float  resta(float n1, float n2){
	float r = n1-n2;
	return r;
}
float  multiplicacion(float n1, float n2){
	float m = n1*n2;
	return m;
}
float  division(float n1, float n2){
	float d = n1/n2;
	return d;
}

//Define que hace cada función de las magnitudes fisicas

float  MaK(float n){
	float m = (n*3600)/(1000);
	return m;
}
float  KaM(float n){
	float k = (n*1000)/(3600);
	return k;
}
float  CaJ(float n){
	float c = n*4.18;
	return c;
}
float  JaC(float n){
	float j = n*0.24;
	return j;
}
float  Cm3aL(float n){
	float d = n*0.001;
	return d;
}
float  LaCm3(float n){
	float l = n*1000;
	return l;
}

//Funcion de pausa que hace que despues de cada función tengas que pulsar una tecla par acontinuar
void pausa(){
	cout<<"Pulsa una tecla para continuar: "<<endl;
	getwchar();
	getwchar();
}

int main (){ 

	int opcion, opcion2, opcion3;
	float ancho, largo, radio, n1, n2, n;
	do{
		system("cls");
		cout<<"1- Calculadora"<<endl;
		cout<<"2- Magnitudes rectangulo"<<endl;
		cout<<"3- Conversor de unidades"<<endl;
		cout<<"4- Magnitudes de un circulo"<<endl;
		cout<<"5- Exit"<<endl;
		cin>> opcion;
		
		switch(opcion){
			
			
			//calculadora
			case 1:
				system("cls");
			 	cout<<"1- Suma"<<endl;
				cout<<"2- Resta "<<endl;
				cout<<"3- Multiplicacion"<<endl;
				cout<<"4- Division"<<endl;
				cin>>opcion2;
			switch(opcion2){
				//suma
				case 1:
					cout<<"Dime el primer numero:"<<endl;
					cin>>n1;
					cout<<"Dime el segundo numero:"<<endl;
					cin>>n2;
					cout<< "La suma es:"<< suma(n1, n2)<<endl;
					pausa();
					break;
					
				//resta
				case 2:
					cout<<"Dime el primer numero:"<<endl;
					cin>>n1;
					cout<<"Dime el segundo numero:"<<endl;
					cin>>n2;
					cout<< "La Resta es:"<< resta(n1, n2)<<endl;
					pausa();
					break;
			
				//multiplicacion
				case 3:
					cout<<"Dime el primer numero:"<<endl;
					cin>>n1;
					cout<<"Dime el segundo numero:"<<endl;
					cin>>n2;
					cout<< "La Multiplicacion es:"<< multiplicacion(n1, n2)<<endl;
					pausa();
					break;
			
				//division
				case 4:
					cout<<"Dime el primer numero:"<<endl;
					cin>>n1;
					cout<<"Dime el segundo numero:"<<endl;
					cin>>n2;
					cout<< "La Division es:"<< division(n1, n2)<<endl;
					pausa();
					break;
			}
				break;
			//rectangulo
			case 2: 
				system("cls");
				cout<< "Ancho: ";
				cin>>ancho;
				cout<<"Largo: ";
				cin >> largo;
				
				//Llama a las funciones de perimetro y area asignandoles un valor a sus parametros de entrada
				
				cout<< "El area es:"<< areaRectangulo(ancho, largo)<<endl;
				cout<< "El perimetro es:"<< perimetroRectangulo(ancho, largo)<<endl;
				pausa();
				break;
			//conversor de unidades
			case 3:
				system("cls"); 
				cout<<"1- m/s a km/h"<<endl;
				cout<<"2- km/h a m/s"<<endl;
				cout<<"3- calorias a julios"<<endl;
				cout<<"4- julios a calorias"<<endl;
				cout<<"5- cm3 a litros"<<endl;
				cout<<"6- litros a cm3"<<endl;
				cin>>opcion3;
				
				switch(opcion3){
				
					case 1: 
						cout<<"Dime los metros por segundo:"<<endl;
						cin>>n;
						cout<< "Son:"<< MaK(n)<<" km/h"<<endl;
						pausa();
						break;
			
					case 2: 
						cout<<"Dime los kilometro por hora:"<<endl;
						cin>>n;
						cout<< "Son:"<< KaM(n)<<" m/s"<<endl;
						pausa();
						break;
				
					case 3: 
						cout<<"Dime las calorias:"<<endl;
						cin>>n;
						cout<< "Son:"<< CaJ(n)<<" julios"<<endl;
						pausa();
						break;
				
					case 4: 
						cout<<"Dime los julios:"<<endl;
						cin>>n;
						cout<< "Son:"<< JaC(n)<<" calorias"<<endl;
						pausa();
						break;
				
					case 5: 
						cout<<"Dime los centimetros cubicos:"<<endl;
						cin>>n;
						cout<< "Son:"<< Cm3aL(n)<<" litros"<<endl;
						pausa();
						break;
				
					case 6: 
						cout<<"Dime los litros:"<<endl;
						cin>>n;
						cout<< "Son:"<< LaCm3(n)<<" cm3"<<endl;
						pausa();
						break;
			}
				
				break;
			//circulo
			case 4: 
				system("cls");
				cout<<"Dime el radio del circulo:"<<endl;
				cin>> radio;
				
				//Llama a las funciones de perimetro y area asignandoles un valor a sus parametros de entrada
				
				cout<< "El area es:"<< areaCirculo(radio)<<endl;
				cout<< "El perimetro es:"<< perimetroCirculo(radio)<<endl;
				pausa();
				break;
			//exit
			case 5: 
				system("cls");
				exit(0);
				pausa();
				break;
		}	
	}
	while(opcion != 5);
	return 0;
}
 
