#include<iostream>
using namespace std;
class Cqueue
{
private :
        int front;
        int rear;
        int *p;
        int size;
        int count;
public:

        Cqueue(int s)
        {
                front=-1;
                rear=-1;
                count=0;
                size=s;
                p=new int[s];

        }
        void enqueue(int elem)
        {
                if(count==0)
                      {

                        front=0;
                        rear=0;
                        p[rear]=elem;

                        cout<<"elements"<<elem<<endl;
                        count++;

                      }

                else if(rear==size-1 && count<size)
                     {
                        count++;
                        rear=0;
                        p[rear]=elem;

                        cout<<"rear element :: "<<elem<<endl;

                    }

                else
                   {
                        count++;
                       	rear++;
                        p[rear]=elem;
                        cout<<"rear element ::"<<elem<<endl;
                  }
            cout<<"No. of elements"<<count<<endl;

        }


        void dequeue()
        {


                if(front==(size-1))
                {
                        count--;
                        front=0;
                }

                 else
                {
                        count--;
                        int temp=p[front];
                        cout<<"value of front ::"<<front<<endl;
                        ++front;
                        cout<<"value :: "<<temp<<endl;

                }
              cout<<"No. of elements"<<count<<endl;

         }

        void display()
        {
                int j=1,i;
                cout<<"the value of totalcount :: "<<count<<endl;
                for(i=front ;j<=count;j++)
                {
                        cout<<"the element of queue are :: "<<p[i]<<endl;
                        if(i==size-1)
                        {
                                i=0;
                        }
                        else
                        {
                               i++;
                        }
                }
        }



};

int main()
{
	Cqueue q1(5);
	int choice,elem;
	cout<<"enter the element to added"<<endl;
	cin>>elem;
	do
	{
		cout<<"1. Add element in queue"<<endl;
		cout<<"2. Delete element in queue"<<endl;
		cout<<"3. Display the element"<<endl;
		cout<<"enter the choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
		        q1.enqueue(elem);
		        break;
		case 2:
			q1.dequeue();
		        break;
		
		case 3:
		        q1.display();
		        break;
		}
	}while(choice!=0);
}
	                                                                       

