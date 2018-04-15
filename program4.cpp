#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class STRING
{
	char name[20];
	public: STRING()
		{
			name[20]='\0';
		}
		STRING(char a[20])
		{
			strcpy(name,a);
		}
		STRING(STRING &s)
		{
			strcpy(name,s.name);
		}
		friend STRING operator+(STRING S1,STRING s2);
		friend ostream &operator<<(ostream &p,STRING s);
};
STRING operator+(STRING s1,STRING s2)
{
	STRING temp(s1);
	strcat(temp.name," ");
	strcat(temp.name,s2.name);
	return temp;
}
ostream &operator<<(ostream &p,STRING s)
{
	p<<s.name<<endl;
	return p;
}
int main()
{
	STRING s3;
	STRING s1("Dr AIT");
	STRING s2("Bangalore");
	cout<<s1;
	cout<<s2;
	s3=s1+s2;
	cout<<s3;
}
