#include<iostream>
#include<iomanip>
using namespace std;
class shape
{
	public: int x,y;
		virtual void read()=0;
		virtual void compute()=0;
		virtual void display()=0;
};
class rectangle:public shape
{
	float area;
	public:void read()
		{
			cout<<"Enter x and y"<<endl;
			cin>>x>>y;
		}
		void compute()
		{
			area=x*y;
		}
		void display()
		{
			cout<<"Area rectangle"<<area<<endl;
		}
};
class circle:public shape
{
	float area;
	public:void read()
		{
			cout<<"Enter radius"<<endl;
			cin>>x;
		}
		void compute()
		{
			area=3.142*x*x;
		}
		void display()
		{
			cout<<"Area of circle:"<<area<<endl;
		}
};
class square:public shape
{
	float area;
	public:void read()
		{
			cout<<"Enter the side"<<endl;
			cin>>x;
		}
		void compute()
		{
			area=x*x;
		}
		void display()
		{
			cout<<"Area square="<<area<<endl;
		}
};
int main()
{
        shape *s[3];
        circle c;
        square sq;
        rectangle r;
        s[0]=&c;
        s[1]=&r;
        s[2]=&sq;
        while(1)
        {
                cout<<"enter the choice"<<endl;
                cout<<"1:area of circle 2:area of rectangle 3:area of square"<<endl;
                int ch;
                cin>>ch;
                switch(ch)
                {
                        case 1: s[0]->read();
                                s[0]->compute();
                                c.display();
                                break;
                        case 2: s[1]->read();
                                s[1]->compute();
                                r.display();
                                break;
                        case 3: s[2]->read();
                                s[2]->compute();
                                sq.display();
                                break;
                        default:return 0;
                }
        }
}


