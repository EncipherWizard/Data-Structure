#include<iostream>
using namespace std;

class exp
{
	char *msg;
	public:
	exp(char ch[])
	{
		msg=ch;
	}
	void getmessage()
	{
		cout<<msg<<endl;
	}
};

class Queue
{
	private:
		int rear;
		int front;
		int *arr;
		int size;
	public:
		Queue(int s)
		{
			rear=-1;
			front=-1;
			size=s;
			arr=new int[size];
		}
		bool is_full()
		{
			if(rear==size-1)
				return true;
			return false;
		}
		bool is_empty()
		{
			if(rear == -1 && front == -1)
				return true;
			else if(front>rear)
				return true;
			return false;
		}
		void enque(int ele)
		{
			if(is_full())
				throw exp("Stack is Full..!!");
			else if(rear == -1 && front == -1)
			{
				rear++;
				front++;
				arr[rear]=ele;
			}
			else
			{
				arr[++rear]=ele;
			}
		}
		int deque()
		{
			if(is_empty())
				throw exp("Stack is Empty..!!");
			else
				return arr[front++];
		}
		void display()
		{
			cout<<"The element are : ";
			for(int i=front;i<=rear;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

int menu()
{
	int ch;
	cout<<"\n0.Exit"<<endl;
	cout<<"1.Enque"<<endl;
	cout<<"2.deque"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"Enter Your choice :";
	cin>>ch;
	return ch;
}

int main()
{
	try
	{
		int choice,size;
		cout<<"Enter the size of Queue :";
		cin>>size;
		Queue q1(size);
		while((choice=menu())!=0)
		{
			switch(choice)
			{
				case 1:
					int a;
					cout<<"Enter Element to Add :";
					cin>>a;
					q1.enque(a);
					break;
				case 2:
					int b;
					b=q1.deque();
					cout<<"Popped element :"<<b<<endl;
					break;
				case 3:
					q1.display();
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
