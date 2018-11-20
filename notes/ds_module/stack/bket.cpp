#include<iostream>
using namespace std;

class exp
{
	char *msg;
	public:
	exp(char ag[])
	{
		msg=ag;
	}
	void getmessage()
	{
		cout<<msg<<endl;
	}
};

class Stack
{
	private:
		int size;
		char *arr;
		int top;
	public:
		Stack(int s)
		{
			size=s;
			top=-1;
			arr=new char [size];
		}
		bool is_full()
		{
			return top==size-1;
		}
		bool is_empty()
		{
			return top==-1;
		}
		void push(char e)
		{
			if(is_full())
				throw exp("Stack is Full..!!");
			arr[++top]=e;
		}
		char pop()
		{
			if(is_empty())
				throw exp("Stack is Empty..!!");
			return arr[top--];
		}
		char peek()
		{
			if(is_empty())
				throw exp("Stack is Empty..!!");
			return arr[top];
		}
};

int main()
{
	try{
	int size;
	char ch;
	char name[30];
	cout<<"Enter the size of Array: ";
	cin>>size;
	Stack s1(size);
	cout<<"Enter the String of braket : ";
	cin.get();
	cin.getline(name,30);
	for(int i=0;(ch=name[i])!='\0';i++)
	{
		cout<<"ele :"<<name[i]<<endl;
	}
	for(int i=0;(ch=name[i])!='\0';i++)
	{
		if(ch =='{' || ch =='[' ||ch =='(')
			s1.push(ch);
		else if( ch == ')' || ch == ']' || ch == '}')
		{
			if(ch == ')')
			{
				if(s1.peek()=='(')
					s1.pop();
				else
					throw exp("Braket are Not proper ");
			}
			else if(ch == ']')
			{
				if (s1.peek()=='[')
					s1.pop();
				else
					throw exp("Braket are Not proper ");
			}
			else if(ch == '}')
			{
				if (s1.peek()=='{')
					s1.pop();
				else
					throw exp("Braket are Not proper ");
			}
		}
	}
	if(s1.is_empty())
	{
		cout<<"All braket are Proper "<<endl;
	}
	else
	{
		cout<<"Braket are Not Proper "<<endl;
	}}
	catch (exp &e)
	{
		e.getmessage();
	}
	return 0;
}
