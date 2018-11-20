#include<iostream>
using namespace std;

class Exception
{
	char *msg;
	public:
	Exception(char arr[])
	{
		msg=arr;
	}
	void getmessage()
	{
		cout<<msg<<endl;
	}
};
int priority(char ch1)
{
	if(ch1 == '^')
		return 3;
	else if( ch1 == '/' || ch1 == '*' )
		return 2;
	else if( ch1 == '+' || ch1 == '-' )
		return 1;
	else
		return 0;
}

class Stack
{
	private:
		int size;
		char *arr;
		int top;
	public:
		Stack(int size)
		{
			this->size=size;
			arr=new char[this->size];
			top=-1;
		}
		bool is_full()
		{
			return top==size-1;
		}
		bool is_empty()
		{
			return top==-1;
		}
		void push(char ch)
		{
			if(is_full())
			{
				throw Exception("Stack is full..");
			}
			else
				arr[++this->top]=ch;
		}
		char pop()
		{
			if(is_empty())
			{
				throw Exception("Stack is empty..");
			}
			else
				return arr[this->top--];
		}
		char peek()
		{
			return arr[this->top];
		}
		void Display()
		{
			cout<<"The element are : ";
			for(int i=this->top;i>=0;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

int main()
{
	try{
	int size;
	char ch;
	cout<<"Enter the Size of stack : ";
	cin>>size;
	char str[size];
	cout<<"Enter the InFix Expression : ";
	cin.get();
	cin.getline(str,size);
	Stack s1(size);
	static int i=0;
	char post[20];
	for(int k=0;(ch=str[k])!='\0';k++)
	{
		if(ch == '(')
			s1.push(ch);
		else if(ch == ')')
		{
			while(s1.peek()!='(')
			{
				char ch=s1.pop();
				post[i]=ch;
				i++;
			}
			s1.pop();
		}
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' )
		{
			if(priority(ch) == 2)
			{
				if(priority(s1.peek()) == 3 || priority(s1.peek()) == 2 )
				{
					while(priority(s1.peek()) > 1)
					{
						char ch=s1.pop();
						post[i]=ch;
						i++;
					}
					s1.push(ch);
				}
				else if(priority(s1.peek()) == 1 || priority(s1.peek()) == 0)
					s1.push(ch);
			}

			else if(priority(ch) == 1)
			{
				if(priority(s1.peek()) == 3 || priority(s1.peek()) == 2 || priority(s1.peek()) == 1 )
				{
					while(priority(s1.peek()) > 0)
					{
						char ch=s1.pop();
						post[i]=ch;
						i++;
					}
					s1.push(ch);
				}
				else if( priority(s1.peek()) == 0)
					s1.push(ch);
			}
		}
		else
		{
			post[i]=ch;
			i++;
		}
	}
	cout<<"The PostFix Expression is : ";
	for(int j=0;j<i;j++)
	{
		cout<<post[j]<<" ";
	}
	cout<<endl;}
	catch(Exception &ex)
	{
		ex.getmessage();
	}
	return 0;
}
