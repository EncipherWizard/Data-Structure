#include<iostream>
using namespace std;
template <class T>
class Queue
{
	private:
	int front;
	int rear;
	int size;
	T *q;
	public:
	Queue(int size)
	{
		front=-1;
		rear=-1;
		this->size=size;
		q=new T [size];
	}
	bool isEmpty()
	{
		if(front==-1 && rear==-1)
		{
			return true;
		}
		return false;
	}
	bool isFull()
	{
		if(rear==size-1)
		{
			return true;
		}
		return false;
	}
	T getFront()
	{
		return q[front];
	}
	T getRear()
	{
		return q[rear];
	}
	void enqueue(T el)
	{
		if(isFull())
		{
			throw "Queue is Full\n";
		}
		else
		{
			if(front==-1 && rear==-1)
			{
				front++;
				rear++;
				q[rear]=el;
			}
			else
			{
				rear++;
				q[rear]=el;	
			}
		}
	}
	T dequeue()
	{
		T removedElement=q[front];
		front++;
		return removedElement;
	}
	void display()
	{
		int i;
		cout<<"Elements is Queue :: "<<endl;
		for(i=0;i<size;i++)
		{
			cout<<q[i]<<endl;
		}
	}
	~Queue()
	{
		delete [] q;
	}
};

int main()
{
	try 
	{
		int size,choice;
		cout<<"Enter Size of Stack :: ";
		cin>>size;
		//Queue <int> q1(size);
			
		Queue <double > q1(size);
		double el;	
		do
		{
			cout<<"Enter Suitable Choice \n 1. For Enqueue \n 2. For Dequeue \n 3. Check Queue is full \n 4. Check Queue is empty \n 5. Get Front Element \n 6. Get Rear Element \n 7. Display \n 8. Exit -> ";
			cin>>choice;
			cout<<"\n";
			
			switch(choice)
			{
				case 1 :
					cout<<"Enter Element :: ";
					cin>>el;
					cout<<endl;
					q1.enqueue(el);
					break;
				case 2 :
					double rEl;
					rEl=q1.dequeue();
					cout<<"Element removed :: "<<rEl<<endl;
					break;
				case 3 :
					if(q1.isFull())
					{
						cout<<"Stack is Full"<<endl;
					}
					else
					{
						cout<<"Stack is not full"<<endl;
					}
					break;
				case 4 :
					if(q1.isEmpty())
					{
						cout<<"Stack is Empty"<<endl;
					}
					else
					{
						cout<<"Stack is not Empty"<<endl;
					}
					break;
				case 5 :
					double frontEl;
					frontEl=q1.getFront();
					cout<<"Element in front  :: "<<frontEl<<endl;
					break;
				case 6 :
					double rearEl;
					rearEl=q1.getRear();
					cout<<"Element in Rear  :: "<<rearEl<<endl;
					break;
				case 7 :
					q1.display();
					break;
				case 8 :
					cout<<"Exiting"<<endl;
					return 0;
					break;					
				default:
					cout<<"INVALID CHOICE"<<endl;
					break;
			}
		}while(choice!=7);
	}
	catch(const char * msg)
	{
		cout<<msg<<endl;
		cout<<"End of main";
	}
	
	return 0;
}
