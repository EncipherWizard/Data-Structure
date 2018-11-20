#include<iostream>
using namespace std;
class exp
{
	char *msg;
	public:
	exp()
	{
		this->msg=NULL;
	}
	exp(char msg[])
	{
		this->msg=msg;
	}
	void getmessage()
	{
		cout<<msg<<endl;
	}
};

class Stack
{
	private:
		int top;
		int *st;
		int size;
	public:
		Stack(int size)
		{
			this->size=size;
			this->top=-1;
			this->st=new int[size];
		}
		bool is_full()
		{
			return this->top==this->size-1;
		}
		bool is_empty()
		{
			return this->top==-1;
		}
		void push(int ele)
		{
			if(is_full())
				throw exp("Stack is Full..!!");
			this->st[++this->top]=ele;
		}
		int pop()
		{
			if(is_empty())
				throw exp("Stack is empty..!!");
					return this->st[this->top--];
		}
		void peek()
		{
			cout<<this->st[this->top]<<endl;
		}
		void display()
		{
			cout<<"All the Element : ";
			for(int i=this->top;i>=0;i--)
			{
				cout<<this->st[i]<<" ";
			}
		}
};

int menu()
{
	int ch;
	cout<<"\n0.Exit"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Peek"<<endl;
	cout<<"4.Display"<<endl;
	cout<<"Enter your choice :"<<endl;
	cin>>ch;
	return ch;
}
int main()
{
	try
	{
		int ch,size;
		cout<<"Enter the Size of Array :";
		cin>>size;
		Stack s1(size);
		while((ch=menu())!=0)
		{
			switch(ch)
			{
				case 1:
					int ele;
					cout<<"Enter the Element to push :";
					cin>>ele;
					s1.push(ele);
					break;
				case 2:
					int ele1;
					ele1=s1.pop();
					cout<<"Popped element is :"<<ele1<<endl;
					break;
				case 3:
					s1.peek();
					break;
				case 4:
					s1.display();
					break;

			}
		}
	}
	catch(exp &e)
	{
		e.getmessage();
	}
	return 0;
}
