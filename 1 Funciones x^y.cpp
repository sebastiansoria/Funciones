//1.Construir una función POTEN(y, y), para calcular la potencia x^y de dos números reales cualesquiera.
#include<iostream>
#include"math.h"
using namespace std;
float POTEN(float,float);

int main(){
	int a,b;
	cout<<"Ingrese los valores de x y y para obtener x^y: "<<endl;
	cin>>a>>b;
	cout<<POTEN(a,b);
}

float POTEN(float x,float y){
float r;
r= pow(x,y);
return r;
}
