/*
8.	Construir un procedimiento para resolver una ecuación cuadrática de la forma ax2 + bx + c = 0, 
considerando todos los casos; es decir dos raíces reales, dos raíces complejas o una raíz doble.
*/
#include<iostream>
#include"math.h"
using namespace std;
float Fun(float a,float b, float c);
int main()
{
	float a,b,c;
	cout<<"Este programa resuelve una ecuacion cudratica de la forma ax2 + bx + c = 0"<<endl;
	cout<<"Ingrese el coeficiente a"<<endl;
	cin>>a;
	cout<<"Ingrese el coeficiente b"<<endl;
	cin>>b;
	cout<<"Ingrese el coeficiente c"<<endl;
	cin>>c;
	Fun(a,b,c);
}
float Fun(float a,float b, float c)
{
float d,x1,x2,k;

d=(pow(b,2)-4*a*c);
	
if(d==0)
{
x1=(-b/(a*2));
cout<<"El sistema solo tiene una solucion real: "<<endl;
cout<<"x = "<<x1;
}
else
	{
	if(d>0)
		{
		x1=((-b+pow(d,0.5))/(a*2));
		x2=((-b-pow(d,0.5))/(a*2));
		cout<<"El sistema tiene dos soluciones reales: "<<endl;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
		cout<<a<<","<<b<<","<<c<<endl;
		}
	else
		{

		x1=((-b)/(2*a));
		x2=((-b)/(2*a));
		k= pow(-d,0.5);
		cout<<"El sistema tiene dos soluciones imaginarias: "<<endl;
		cout<<"x1 = "<<x1<<"+"<<(k/(a*2))<<"i"<<endl;
		cout<<"x2 = "<<x2<<(-k/(a*2))<<"i"<<endl;
		cout<<a<<","<<b<<","<<c<<endl;
		}
}	

}
