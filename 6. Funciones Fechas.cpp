/*
6.	Dada una fecha en forma de día, mes, año; mediante un procedimiento LITERAL convertirla en su equivalente literal. 
Por ejemplo: la fecha 20, 5, 1999 se debe ser convertida e imprimir '20 de Mayo de 1999'. 
La llamada para este caso sería LITERAL(20, 5, 1999).
*/
#include<iostream>
using namespace std;
#define K 100
#include <string.h>
int Funcion(int v[]);
int main()
{
	int v[K];
	cout<<"Ingrese el dia (DD)"<<endl;
	cin>>v[1];
	cout<<"Ingrese el mes (MM)"<<endl;
	cin>>v[2];
	cout<<"Ingrese el anno Despues de Cristo (AAAA)"<<endl;
	cin>>v[3];
	Funcion(v);
	
	
	
}
int Funcion(int v[])
{
	int i=0;
	
if((v[2]<=12)&&(v[2]>0)&&(v[3]>0)&&(v[1]>0))//Condiciones del mes y anno y dias en general
	{
//Para meses de 31 dias
		if(((v[2]==1)||(v[2]==3)||(v[2]==5)||(v[2]==7)||(v[2]==8)||(v[2]==10)||(v[2]==12))&&(v[1]<=31)&&(v[1]>0))
		{
		i=2;
	//	cout<<"pene";
		}	
		else
		{
//Para meses de 30 dias
			if(((v[2]==4)||(v[2]==6)||(v[2]==9)||(v[2]==11))&&(v[1]<=30)&&(v[1]>0))
				{
				i=2;
		        }
//Para febrero		        
			else
				{
				if(((v[2]==2))&&(v[1]>0))
					{
						if((v[3]%4==0)&&(v[1]<=29))
							{
							i=2;	
							}
							else
								{
								if((v[3]%4!=0)&&(v[1]<=28))
									{
									i=2;		
									}	
							}
		      	 	}	
				}
				
			}

}

if(i==2)
{
//cout 	
cout<<v[1]<<" de ";	

if(v[2]==1)
{	
cout<<"Enero";
}
if(v[2]==2)
{
cout<<"Febrero";
}
if(v[2]==3)
{	
cout<<"Marzo";
}
if(v[2]==4)
{
cout<<"Abril";
}
if(v[2]==5)
{	
cout<<"Mayo";
}
if(v[2]==6)
{
cout<<"Junio";
}
if(v[2]==7)
{	
cout<<"Julio";
}
if(v[2]==8)
{
cout<<"Agosto";
}
if(v[2]==9)
{	
cout<<"Septiembre";
}
if(v[2]==10)
{
cout<<"Octubre";
}
if(v[2]==11)
{	
cout<<"Noviembre";
}
if(v[2]==12)
{
cout<<"Diciembre";
}
cout<<" de "<<v[3];	
	}
else
	{
		cout<<"Ingrese una fecha valida";		
	
	}
	
	
//cout<<endl<<i<<"pepe"	;	


}


