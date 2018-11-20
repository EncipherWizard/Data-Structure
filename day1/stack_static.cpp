#include<iostream>
using namespace std;


class Stack
{
	private:
	int arr[5];
	int top;
	public:
	
	Stack()
	{
		top=-1;
	}//constructor ended
	
	void push(int el)
	{
		if(top<5)
		arr[++top]=el;
		else
		throw "Stack iss Full!";
	}
	
	void pop()
	{
		int lastel=0;
		if(top==-1)
		throw "Stack is empty";
		else
		
		lastel=arr[top];
		arr[top--];
		cout<<"Popped ELement is :: "<<lastel<<endl;;
	}
};

int main()
{
	try
	{
		Stack s1;
		int choice = 0;
		do
		{
			cout<<"Enter Suitable Choice \n 1. PUSH ELEMENT \n 2. POP ELEMENT \n 3. EXIT \n";
			cin>>choice;
			
			switch(choice)
			{
				case 1: cout<<"Enter Element :: ";
					int el;
					cin>>el;
					s1.push(el);
					break;
				case 2: 
					s1.pop();
					break;
				case 3:
					cout<<"Exiting";
					return 0;
					break;
				default : cout<<"INVALID CHOICE";
				break;
			}
		}while(choice!=3);
	}
	catch(const char* msg)
	{
		cout<<msg<<endl;
		cout<<"End of Stack Program"<<endl;
	}
	return 0;
}
