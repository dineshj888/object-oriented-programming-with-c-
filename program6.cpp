#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
class queue
{ 
	T a[10];
	int r,f,SIZE;
	public:queue(int n)
		{ 
			r=-1;
			f=0;
			SIZE=n;
		}	
		void insert_rear();
		void delete_front();
		void display();
};

template<class T>
void queue<T>::insert_rear()
{
	T item;
	if(r==SIZE-1)
	{
		cout<<"queue is full"<<endl;
		return;
	}
	else
	{
		cout<<"enter the item to be inserted"<<endl;
		cin>>item;
		a[++r]=item;
		return;
	}
}

template<class T>
void queue<T>::delete_front()
{
	if(f>r)
	{
		cout<<"queue Underflow \n"<<endl;
		return;
	}
	cout<<"the deleted item ="<<a[f++]<<endl;
	return;
}





template<class T>
void queue<T>::display()
{
	if(f>r)
	{
		cout<<"queue is empty\n"<<endl;
		return;
	}
	cout<<"the elements of the queue are :: \n"<<endl;
	for(int i=f;i<SIZE;i++)
	cout<<a[i]<<endl;
	return;
}

int main()
{
	int n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	queue<int>Q1(n);
	queue<double>Q2(n);
	int ch,c;
	cout<<"enter your choice"<<endl;
	cout<<"\n1:for intergers \n2:for Double \n3:Exit"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:while(1)
                {
                        cout<<"1:Insert 2:delete 3:display 4:exit \n"<<endl;
                        cin>>c;
                        switch(c)
                        { 
                                case 1:Q1.insert_rear();break;
                                case 2:Q1.delete_front();break;
                                case 3:Q1.display();break;
                                default:return 0;
                        }
                }

		case 2:while(1)
		{
			cout<<"1:Insert 2:delete 3:display 4:exit \n"<<endl;
			cin>>c;
			switch(c)
			{ 
				case 1:Q2.insert_rear();break;
				case 2:Q2.delete_front();break;
				case 3:Q2.display();break;
				default:return 0;
			}
		}
		default:return 0;//exit(0);
	}
}
