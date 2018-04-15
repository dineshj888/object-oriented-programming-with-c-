#include<iostream>
using namespace std;
#include<iomanip>
class complex
{
	float real,image;
	public:
		void input(float r,float i)
		{
			real=r;
			image=i;
		}
		complex add(int);
		complex add(complex);
		void show(complex);
};
complex complex::add(int a)
{
	complex s2;
	s2.real=real+a;
	s2.image=image;
	return s2;
}
complex complex::add(complex s2)
{
	complex s3;
	s3.real=real+s2.real;
	s3.image=image+s2.image;
	return s3;
}
void complex::show(complex c)
{
	cout<<"\n"<<c.real<<"+i"<<c.image<<endl;
}
int main()
{
	complex s1,s2,s3;
	s1.input(1,2);
	s2=s1.add(s1);
	s3=s2.add(s2);
	s1.show(s1);
	s2.show(s2);
	s3.show(s3);
	return 0;
}

