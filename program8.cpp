#include<iostream>
using namespace std;
class num
{
	public: char a[10];
		int o;
};
class hexa:public num
{
	public:int val;
		hexa()
		{
			val=0;
		}
		void read()
		{
			cout<<"Enter hexa no"<<endl;
			cin>>a;
		}
		void hextodec()
		{
			int t,i,j=1,n=0;
			for(i=0;a[i]!='\0';i++)
			{
				n++;
			}
			for(i=n-1;i>=0;i--)
			{
				if(a[i]>'9')
				{
					t=a[i]-87;
					cout<<"t="<<t<<endl;
					val=val+(t*j);
					cout<<"Val="<<val<<endl;
				}
				else
				{
					t=a[i]-48;
					val=val+(t*j);
				}
				j=j*16;
			}
			cout<<"The hexdecimal to decimal is "<<val<<endl;
		}
};
class octal:public num
{
	public: int val1;
		octal()
		{
			val1=0;
		}
		void read()
		{
			cout<<"Enter octal no"<<endl;
			cin>>o;
		}
		void octaltodec()
		{
			int j1=1,d;
			while(o!=0)
			{
				d=o%10;
				val1=val1+(d+j1);
				o=o/10;
				j1=j1*8;
			}
			cout<<"The octal to decimal is"<<val1<<endl;
		}
		friend int operator +(hexa n1,octal n2);
};
int operator +(hexa n1,octal n2)
{
	int k=n1.val+n2.val1;
	return k;
}
int operator +(octal n1,int n2)
{
	int x=n1.val1+n2;
	return x;
}
int main()
{
	hexa h;
	h.read();
	h.hextodec();
	octal o1,o2;
	o1.read();
	o1.octaltodec();
	int c=h+o1;
	cout<<"The value of J= "<<c<<endl;
	o2.read();
	o2.octaltodec();
	cout<<"Enter a integer number "<<endl;
	int no;
	cin>>no;
	int y=o2+no;
	cout<<"The value of y="<<y;
	return 0;
}
