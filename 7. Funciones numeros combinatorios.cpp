/*
7.	Dado un n�mero combinatorio con par�metros n y r, obtener su valor num�rico. Un n�mero combinatorio se define de la siguiente forma:

               n   	      n!
Combi(n, r) =      =  ----------          donde '!' es la funci�n factorial
	       	   r	    r! (n-r)!

Construir un programa que utilice una funci�n factorial llamada FAC(n), y luego desde el programa principal la llame de la siguiente forma:

		C = FAC(n) / (FAC(r) * FAC(n-r))
		
*/
#include<iostream>
using namespace std;
float FAC(int x);
int main()
{
	int n,r;
	float C;
	do
	{
	cout<<"Este programa calcula el numero combinatorio con parametros n y s"<<endl;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	cout<<"Ingrese el valor de r: ";
	cin>>r;	
	}while((n<0)||(r<0)||(n<r));
	
	C = FAC(n) / (FAC(r)*FAC(n-r));
	cout<<"El resultado del numero combinatorio es: "<<C;
}
float FAC(int x)
{
	float fac=1;
	for(int i=1;i<=x;i++)
	{
		fac=fac*i;
	}	
	return fac;
}
