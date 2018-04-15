#include<iostream>
#include<string.h>
using namespace std;
struct node
{
	char data[20];
	struct node *left,*right;
};
typedef struct node *Node;
class dlist
{
	private:Node first;
	        int count;
	public: dlist()
		{
			first=NULL;
			count=1;
		}
		void create();
		void del(int pos);
		void print();
};
void dlist::create()
{
	char item[10];
	cout<<"enter the data\n";
	cin>>item;
	Node temp;
	temp=new(struct node);
	temp->left=temp->right=NULL;
	if(first==NULL)
	{
		strcpy(temp->data,item);
		first=temp;
	}
	else
	{
		strcpy(temp->data,item);
		temp->right=first;
		first->left=temp;
		first=temp;
	}
}
void dlist::del(int pos)
{
	Node cur,prev,temp;
	if(first==NULL)
	{
		cout<<"no element to delete"<<endl;
		return;
	}
	if(pos==1)
	{
		cout<<first->data;
		cur=first;
		first=first->right;
		first->left=NULL;
		delete cur;
		return;
	}
	prev=NULL;
	cur=first;
	while(cur!=NULL && count!=pos)
	{
		prev=cur;
		cur=cur->right;
		count++;
	}
	count=1;
	temp=cur->right;
	prev->right=temp;
	temp->left=prev;
	cout<<"the item deleted is :"<<cur->data<<endl;
	delete(cur);
}
void dlist::print()
{
	Node temp;
	if(first==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	temp=first;
	while(temp!=NULL)
	{
		cout<<"->"<<temp->data;
		temp=temp->right;
	}
}
int  main()
{
	int pos,choice;
	char  item[10];
	dlist d;
	while(1)
	{
		cout<<endl<<"1:insert 2:delete 3:print 4:exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: d.create();
				break;
			case 2: cout<<"enter the position"<<endl;
				cin>>pos;
				d.del(pos);
				break;
			case 3 :cout<<"contents of the list are:"<<endl;
				d.print();
				break;
			default:return(0);
		}
	}
}
