#include<iostream>
#include<iomanip>
using namespace std;
class date
{
	int d,m,y;
public: int leap(int);
	int days(int);
	void getdate(void);
	int operator-(date);
	date operator+(int);
	friend ostream &operator<<(ostream &,date);
	friend int checkdate(date,date);
};
ostream &operator<<(ostream &out,date d)
{
	out<<d.d<<"/"<<d.m<<"/"<<d.y;
	return(out);
}
int date::leap(int y)
{
	if(y%4==0)
	return(1);
	else
	return(0);
}
int date::days(int i)
{
	if(i==2)
	return(28);
	if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
	return(31);
	return(30);
}
int date::operator-(date d2)
{
	int leapyear,count=0;
	while(m!=d2.m || y!=d2.y)
	{
		d2.d++;
		count++;
		leapyear=0;
		if(d2.m==2)
		leapyear=d2.leap(d2.y);
		if(d2.d>(days(d2.m)+leapyear))
		{
			d2.d=1;
			d2.m++;
		}
		if(d2.m>12)
		{
			d2.m=1;
			d2.y++;
		}
	}
	count+=(d-d2.d);
	return(count);
}
date date::operator+(int ndays)
{
	int i,leapyear=0;
	for(i=1;i<=ndays;i++)
	{
		d++;
		leapyear=0;
		if(m==2)
		leapyear=leap(y);
		if(d>(days(m)+leapyear))
		{
			m++;
			d=1;
		}
		if(m>12)
		{
			m=1;
			y++;
		}
	}
	return (*this);
}
void date::getdate(void)
{
	cout<<"\n Enter the date\n";
	cout<<"Day(dd):\n";
	cin>>d;
	cout<<"month(mm):\n";
	cin>>m;
	cout<<"year (yy):\n";
	cin>>y;
}
int checkdate(date d1,date d2)
{
	if(d1.y<d2.y)
	return(0);
	else if(d1.y==d2.y)
	{
		if(d1.m<d2.m)
		return(0);
		else 
		if(d1.m==d2.m)
		{
			if(d1.d<d2.d)
				return(0);
			else
				return(1);
		}
		else return (1);
	}
	else return(1);
}
int main()
{
	date d1,d2,d3,d4;
	int choice,no_days=0,i;
	for(;;)
	{
		cout<<"1:substract 2 dates\n2:add no. of days to a date\n";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"Enter date 1 greater then date 2"<<endl;
				d1.getdate();
				d2.getdate();
				i=checkdate(d1,d2);
				if(i==1)
				{
					no_days=d1-d2;
					cout<<endl<<d1<<"-"<<d2<<endl;
				}
				else
				{
					no_days=d2-d1;
					cout<<endl<<d2<<"-"<<d1<<endl;
				}
				break;
			case 2: d3.getdate();
				cout<<endl<<"Enter no of days to be added\n";
				cin>>no_days;
				cout<<endl<<d3<<"+"<<no_days<<endl;
				d4=d3+no_days;
				cout<<endl<<d4<<endl;
				break;
			default:cout<<"Thnx";
				break;
		}
		break;
	}
	return 0;
}
