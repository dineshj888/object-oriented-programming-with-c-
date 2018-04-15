#include<iostream>
using namespace std;
class student
{
	static int count;
	char name[30];
	int reg;
	float t1,t2,t3;
	float avg;
	public:
		void readdata()
		{
			cout<<"Enter name"<<endl;
			cin>>name;
			cout<<"Enter the marks"<<endl;
			cin>>t1>>t2>>t3;
			reg=++count;
		}
		void display()
		{
			cout<<"Student details"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Reg no:"<<reg<<endl;
			cout<<"test 1:"<<t1<<endl;
			cout<<"test 2:"<<t2<<endl;
			cout<<"test 3:"<<t3<<endl;
			cout<<"Average:"<<avg<<endl;
		}
		void compute()
		{
			if(t1<=t2 && t1<=t3)
			{
				avg=(t2+t3)/2;
			}
			else if(t2<=t1 && t2<=t3)
			{	
				avg=(t1+t3)/2;
			}
			else
			{
				avg=(t1+t2)/2;
			}
		}
};
int  student::count;
int main()
{
	student s[30];
	int n,i;
	cout<<"Enter number of students"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
		s[i].readdata();
		s[i].compute();
	for(i=0;i<n;i++)
		s[i].display();
	return 0;
}
