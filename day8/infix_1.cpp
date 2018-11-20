#include<iostream>
using namespace std;

class Stack
{
	private:
	int top;
	int *stk;
	int size;
	public:
	Stack(int size)
	{
		this->size=size;
		stk=new int[size];
		top=-1;
	}
	void push(int el)
	{
		if(top<size)
		stk[++top]=el;
		else
		throw "Stack is Full";
	}
	void pop()
	{
		int last_Element;
		if(top==-1)
		throw "Stack is Empty";
		else
		last_Element=stk[top];
		stk[top--];
		cout<<"Popped element is :: "<<last_Element<<endl;
	}
	void is_empty()
	{
		if(top==-1)
		cout<<"Stack is empty"<<endl;
		else
		cout<< "Stack is Not Empty"<<endl;
	}
	void is_full()
	{
		if(top<size-1)
		cout<<"Stack is Not Full"<<endl;
		else
		cout<<"Stack is Full"<<endl;
	}
	~Stack()
	{
		delete [] stk;
	}
};


int prec(char c)
{
	if(c=='^')
	return 3;
	else if(c=='*'||c=='/')
	return 2;
	else if(c=='+'||c=='-')
	return 1;
	else 
	return -1;
}

void infixToPostfix(string s)
{
	Stack s1()
}
int main()
{
	
	try
	{
		int choice,size,el;
		cout<<"Enter size of stack :: ";
		cin>>size;
		Stack s1(size);
		do
		{
			cout<<"Enter Suitable Choice \n 1. For Push \n 2. For Pop \n 3. check stack is full \n 4. check stack is empty \n 5. Exit \n ->";
			cin>>choice;
			cout<<"";
			
			switch(choice)
			{
				case 1:
					cout<<"Enter Element  :: ";
					cin>>el;
					s1.push(el);
					break;
				case 2:
					s1.pop();
					break;
				case 3 :
					s1.is_full();
					break;
				case 4:
					s1.is_empty();
					break;
				case 5:
					cout<<"Exit";
					return 0;
				default:
					cout<<"INVALID CHOICE";
			}
		}while(choice!=5);
	}
	catch(const char * msg)
	{
		cout<<msg<<endl;
	}
		return 0;
}		
