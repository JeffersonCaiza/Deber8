# include <iostream>
using namespace std;

int multi(int a);
void decre(int n);
int main()
{
	int a,n;
	cout<<"ingrese el valor"<<endl;
	cin>>a;
	n=a;
	cout<<"serie: "<<endl;
	decre(n);
	cout<<endl;
	cout<<"el resultado es: "<<multi(a)<<endl;
	return 0;
}

int multi(int a)
{
	if(a==0)
	{
		return(1);
    }
	else
	{
		return(a*multi(a-1));
    }
	
}
void decre(int n)
{
	cout<<"-"<<n;
   if(n>1)
   {
    decre(n-1);
   }
   
}
