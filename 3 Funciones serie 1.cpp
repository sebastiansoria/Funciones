//3.	Construir un programa, mediante funciones, para hallar la suma de la siguiente serie, 
//dados X y N enteros positivos:
//
//    x1         x2         x3        x4                 xN
//S =           +          +          +          + . . . + 
//         1!        2!          3!        4!                 N!
#include<iostream>
#include"math.h"
using namespace std;


float Funcion1(int,float);//Prototipo


int main(){
 int n;
 float x;
 cout<<"El programa resuelve la serie (x^1)/1! + (x^2/2!) +...+ (x^n)/n!"<<endl;
 cout<<"Ingrese el termino n-esimo: ";
 cin>>n;
 cout<<"Ingrese el valor de x: ";
 cin>>x;
 cout<<Funcion1(n,x);//llamada
}

//Deficion 
float Funcion1(int n,float x){
	float suma=0,fac=1,resultado;
	for(int i=1;i<=n;i++){
	fac = fac*i;
	suma = suma + pow(x,i)/fac;
	}
	
	return suma;
}
