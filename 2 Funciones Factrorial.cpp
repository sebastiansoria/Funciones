//2.	Construir una función FAC(n) para calcular el factorial de un entero.
#include<iostream>
#include<math.h>
using namespace std;
int FAC(int);
int main(){
	int n;

	do{
	cout<<"Ingrese el termino n-esimo para sacar su factorial: ";
	cin>>n;	
	if(n>=0){
	cout<<FAC(n)<<endl;		
	}
	
	}while(n<0);
	

}
int FAC(int a){
		int fac=1;
	for(int i=1;i<=a;i++){
	fac= fac*i;
	}
	return fac;
}

