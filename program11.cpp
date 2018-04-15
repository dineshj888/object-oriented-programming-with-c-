#include<iostream>
#include<list>
#include<vector>
using namespace std;
void display(vector <int>&v2)
{
	cout<<"The contents of v2 is "<<endl;
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<endl;
	}
}
void displaylist(list <int>&l)
{
	list <int>::iterator p;
	cout<<"The content of list are"<<endl;
	for(p=l.begin();p!=l.end();p++)
	{
		cout<<*p<<endl;
	}
}
int main()
{
	vector <int>v1;
	int x,i;
	cout<<"Enter 5 unsorted elements on the vector 1"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>x;
		v1.push_back(x);
	}
	list <int>l;
	cout<<"Enter n sorted form vector 1 to lst"<<endl;
	copy(v1.begin(),v1.end(),back_inserter(l));
	l.sort();
	displaylist(l);
	vector <int>v2;
	copy(l.begin(),l.end(),back_inserter(v2));
	display(v2);
	return 0;
}
