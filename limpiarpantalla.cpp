#include <iostream>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
	char letra;
	double x,y;
	for ( ; ; )
	{
		system("cls");
		cout<<endl<<"Introduce un numero entero: ";
	cin>>x;
	if( x !=0)
	{
		y=1/x;
		cout<<"\n\t1/"<<x<<" = "<<y<<endl<<endl<<"Desea realizar otra operacion? (s/n) ";
		cin>>letra;
		if (toupper(letra) !='S')
			break;
	
	}
	else 
		{
		cout<<"\n EROR. NO ACEPTAMOS VALOR IGUAL cero"<<endl<<endl<<"Deseas realizar otra operacion? (s/n)";
		cin>>letra;
		if (toupper(letra)!='S')
			break;
	}
	}
	return 0;
}

