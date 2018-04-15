#include<iostream>
#include<string.h>
using namespace std;
void fact(int);
class ide
{
	public:char str_what[80];
	int what;
	ide()
	{
		*str_what=0;
		what=0;
	}
	ide(char *s,int e)
	{
		strcpy(str_what,s);
		what=e;
	}
};
int main()
{
	int n;
	try
	{
		cout<<"Enter no to compute n fact"<<endl;
		cin>>n;
		if(n<0)
		throw ide("negatice number entered",n);
		else
		fact(n);
	}
	catch(ide e)
	{
		cout<<e.str_what<<":";
		cout<<e.what<<endl;
	}
	return 0;
}
void fact(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial is :"<<fact<<endl;
}
