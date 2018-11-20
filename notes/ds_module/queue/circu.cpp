#include<iostream>
using namespace std;

class exp
{
	char *msg;
	public:
	exp(char nm[])
	{
		msg=nm;
	}
	void getmessage()
	{
		cout<<msg<<endl;
	}
};
class circle
{
	private:
		int size;
		int *arr;
		int front;
		int rear;
		int countele;
	public:
		circle(int s)
		{
			rear=-1;
			front=-1;
			countele=0;
			size=s;
			arr=new int[size];
		}
		bool is_full()
		{
			if(countele==size)
				return true;
			else
				return false;
		}
		void enque(int ele)
		{
			if(is_full())
				throw exp("Queue is Full..!!");
			if(rear==size-1 && countele<size)
			{
				rear=0;
				arr[rear]=ele;
				countele++;
				cout<<"Element Added is : "<<ele<<endl;
			}
			else if(rear==-1 && front==-1)
			{
				front=0;
				arr[++rear]=ele;
				countele++;
				cout<<"Element  Added is : "<<ele<<endl;
			}
			else
			{
				if(rear==size-1 && countele<size)
				{
					rear=0;
				}
				else
					rear++;
				arr[rear]=ele;
				countele++;
				cout<<"Element Added is : "<<ele<<endl;
			}

			cout<<"Element count is : "<<countele<<endl;
		}
		bool is_empty()
		{
			if(front == -1)
				return true;
			else if(countele==0)
				return true;
			else
				return false;
		}
		int deque()
		{
			if(is_empty())
				throw exp("Queue is Empty..!!");
			else
			{
				int temp;
				if(front==size-1)
				{
					temp=arr[front];
					front=0;
				}
				else
				{
					temp=arr[front];
					front++;
				}
				countele--;
				cout<<"Removed Element is : "<<temp<<endl;
			}
			cout<<"Element count is : "<<countele<<endl;
			
		}
		void display()
		{
			if(is_empty())
				throw exp("Queue is Empty..!!");
			cout<<"Element are : ";
			for(int i=front,j=1;j<=countele;j++)
			{
				cout<<arr[i]<<" ";
				if(i==size-1)
				{
					i=0;
				}
				else
				{
					i++;
				}
			}
			cout<<endl;
		}
};

int menu()
{
	int ch;
	cout<<endl;
	cout<<"0.Exit "<<endl;
	cout<<"1.Enque "<<endl;
	cout<<"2.Deque "<<endl;
	cout<<"3.Display "<<endl;
	cout<<"Enter your Choice :  ";
	cin>>ch;
	return ch;
}

int main()
{
	int choice,size;
	cout<<"Enter the Size of Queue : ";
	cin>>size;
	circle c1(size);
	while((choice=menu())!=0)
	{
		try
		{
			switch(choice)
			{
				case 1:
					int a;
					cout<<"Enter the Element to Add :";
					cin>>a;
					c1.enque(a);
					break;
				case 2:
					c1.deque();
					break;
				case 3:
					c1.display();
					break;
				default:
					cout<<"Invalid choice \n Please reinsert :";
					break;
			}
		}
		catch(exp &e)
		{
			e.getmessage();
		}
	}
}
