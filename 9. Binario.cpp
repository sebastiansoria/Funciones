/*
9.	Construir una función que lea un valor binario X y devuelva como resultado su equivalente decimal.
*/
#include<iostream>
#include"math.h"
using namespace std;
int validar(int v);
int tamano(int v);
int invertir(int v,int n);
int trasformar(int v,int n);
int main()
{
int v,n,validacion;
do
{
cout<<"Ingrese un valor binario para cambiarlo a decimal: "<<endl;
cin>>v;
validacion=validar(v);	
}while(validacion==0);

n=tamano(v);
v=invertir(v,n);
trasformar(v,n);

}
//Valida el valor para que solo contenga 1 y 0
int validar(int v)
{
	int validacion=1;
	while(v!=0)
	{
	if((v%10!=0)&&(v%10!=1))
	{
	validacion=0;	
	}
	v=v/10;	
	}
	return validacion;
}	

//Encontrar el numero de cifras usadas
int tamano(int v)
{
	int i=0;
		while(v!=0)
	{
	i++;
	v=v/10;	
	}
	return i;		
}
//Invierte el numero binario
int invertir(int v,int n)
{
	int i=0,aux,suma=0;
	
	while(v!=0)
	{
	i++;
	aux=v%10;
	v=v/10;
	suma=suma+aux*pow(10,n-i);	
	}
	return suma;
}
//Transforma el binario invertido a decimal
int trasformar(int v,int n)
{
	int i=0,aux,suma=0;
		while(v!=0)
	{
	i++;
	aux=v%10;
	v=v/10;
	suma=suma+aux*pow(2,n-i);	
	}
	cout<<"El numero en decimal es: "<<endl<<suma;	
}
