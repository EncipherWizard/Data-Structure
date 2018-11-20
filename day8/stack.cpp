#include<iostream>
using namespace std;

class Stack
{
	private:
	int* stk;
	int top;
	int size;
	public:
	Stack(int size)
	{
		this->size=size;
		stk=new int[size];
		top=-1;
	}
	bool isEmpty()
	{
		if(top==-1)
		return true;
		else
		return false;
	}
	void push(int el)
	{
		if(top<size-1)
		stk[++top]=el;
		else
		cout<<"StackOver Flow";
	}
	void pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty";
		}
		else
		{
		int rEl=stk[top];
		stk[--top];
		cout<<"Popped Element is :: "<<rEl<<endl;
		}
	}
	void display()
	{
		int i;
		for(i=0;i<size;i++)
		{
			cout<<" i :: "<<i<<*(stk+i);
		}
	}
};

int main()
{
	int ch,val,size,flag=0;
	
	cout<<"Enter the Size :: ";
	cin>>size;
	Stack s1(size);
	do
	{
		cout<<"ENter Choice  :: ";
		cout<<"\n1. Push  \n 2.Pop  \n3.Display  \n4.Exit  \n->";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter the Element  :: " ;
				cin>>val;
				s1.push(val);
				break;
			case 2: 
				s1.pop();
				break;
			case 3: 
				s1.display();
				break;
			case 4: 
				return 0;
				break;
			default:
				cout<<"INVALID CHOICE";
				break;
		}
	}while(ch!=4);
	return 0;
}
