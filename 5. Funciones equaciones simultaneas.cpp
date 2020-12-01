
/*
5.	Construir una función que calcule la solución de un sistema de dos ecuaciones con 2 variables de la forma:
Ax + By + C = 0
Dx + Ey + F = 0

El procedimiento debe recibir como parámetros de entrada los 6 coeficientes de la ecuación,
y dar como parámetros de salida la solución (X, Y). Por ejemplo una llamada sería la siguiente: 
SISTEMA(1,2,3,4,5,6, X, Y), correspondiente al sistema:

 x + 2y + 3 = 0
4x + 5y + 6 = 0
*/
#include<iostream>
using namespace std;
int main()
{
	float A,B,C,D,E,F,x,y,denominador;
	cout<<"Este programa resuelve un sistema de ecuaciones con 2 variables de la forma: "<<endl;	
	cout<<"Ax + By + C = 0"<<endl<<"Dx + Ey + F = 0"<<endl;
	cout<<"Ingrese A"<<endl;
	cin>>A;
	cout<<"Ingrese B"<<endl;
	cin>>B;
	cout<<"Ingrese C"<<endl;
	cin>>C;
	cout<<"Ingrese D"<<endl;
	cin>>D;
	cout<<"Ingrese E"<<endl;
	cin>>E;
	cout<<"Ingrese F"<<endl;
	cin>>F;
	denominador= A*E-B*D;
	x=(B*F-C*E)/denominador;
	y=(C*D-A*F)/denominador;
	if(denominador>0){
	cout<<"La solucion es: "<<"x = "<<x<<", y = "<<y<<endl;	
	}
	else
	{
	if((A/D)==(C/F))	
	{
	cout<<"El sistema tiene infinitas soluciones";	
	}else
	{
	cout<<"El sistema no tiene solucion";	
	}
	
	}

}	

