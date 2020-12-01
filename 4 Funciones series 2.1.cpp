//  4. Construir un programa, que mediante funciones, halle la suma de la siguiente      serie, dados X y N enteros positivos:
 
//   x1         x3         x5        x7                  xN
//   S =           -          +          -          +/- . . .  
//               1!        3!          5!       7!                  N!

#include <iostream>
#include "math.h"
using namespace std;

float Funcion(int,float);
float FuncionEnteros(float);
int main(){
    int aid;
	float x,n,prueba;
	
	do
	{
	cout << "Igrese el termino n-esimo como entero impar positivo: "<<endl;
    cin >> n;
    //Para que el resto pueda correr ya que solo lo hace con enteros(Y comprobar si n es impar)
    aid=n;
    //Para comprobar si el numero ingresado es entero
    prueba=FuncionEnteros(n);
	}while((n<0)||aid%2==0||prueba==0);
	
	do
	{
	cout << "Igrese el valor de x como entero positivo: "<<endl;
    cin >> x;
    //Para comprobar si el numero ingresado es entero
	prueba=FuncionEnteros(x);	
	}while((x<0)||prueba==0);
	
	cout<<"El resultado de la serie es: "<<Funcion(n,x)<<endl;

    
}


float Funcion(int n, float x){
	int i,h,k,e=1,fac=1;
	float resultado=0, t=0;
	for(i=1;i<=n;i=i+2)
	{
		
		//Para calcular x^n
	   for(k=1;k<=i;k=k+2)
	    {
	   	t=pow(x,k);
		}
		//Para calcular n!
		fac=1; //Para resetear el valor del factorial
		for(h=1;h<=i;h++)
		{
		fac=fac*h;
		}
		//Para cambiar el signo de la sumatoria
		e++;
		//Para calcular la suma de (x^n)/n!
		resultado=resultado + pow(-1,e)*(t/fac);
		
		
	}
	return resultado;
}
float FuncionEnteros(float a)
{
	int b;
	float ValordeVerdad;
	b=a;
	//cout<<b<<"b"<<endl;
	//cout<<a<<"a"<<endl;
	//cout<<a-b<<endl;
	if(b!=a){
	ValordeVerdad=0;
	}
	else{ValordeVerdad=1;}
	//cout<<ValordeVerdad<<"?"<<endl;
	return ValordeVerdad;
}


