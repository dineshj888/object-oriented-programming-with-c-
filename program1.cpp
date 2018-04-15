#include<iostream>
using namespace std;
class elebill
{
	char name[20];
	float unit,price,surcharge;
	public:
		void input();
		void calc();
		void display();
};
void elebill::input()
{
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter the unit"<<endl;
	cin>>unit;
}
void elebill::display()
{
	cout<<"Username="<<name<<endl;
	cout<<"Units consumed="<<unit<<endl;
	cout<<"Amount="<<price<<endl;
	cout<<"Surcharge="<<surcharge<<endl;
}
void elebill::calc()
{
	if(unit<=100)
	{
		price=(unit*1.5)+50;
	}
	else if(unit<=200)
	{
		price=50+(100*1.5)+(unit-100)*1.80;
	}
	else
	{
		price=50+(100*1.5)+(100*1.8)+(unit-200)*2.5;
	}
	if(price>300)
	{
		surcharge=(price*0.15);
		price=(price+surcharge);
	}
}
int main()
{
	elebill user1;
	user1.input();
	user1.calc();
	user1.display();
	return 0;
}
