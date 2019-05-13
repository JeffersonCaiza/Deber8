#include <iostream>
using namespace std;
int suma(int a);
int main()
{
	int numero;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	cout<<"la sumatoria de los digitos es "<<suma(numero)<<endl;

	
}

int suma(int a)
{
	if(a==0)
	{
		return a;
	}
	else
	{
		return (a%10+suma(a/10));
	}

}
