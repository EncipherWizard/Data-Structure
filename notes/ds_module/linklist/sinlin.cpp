#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			data=0;
			next=NULL;
		}
};

class List
{
	private:
		Node *head;
		Node *tail;
		int count;
	public:
		List()
		{
			head=NULL;
			tail=NULL;
			count=0;
		}
		Node* createNode(int val)
		{
			Node* newnode=new Node;
			if(newnode!=NULL)
			{
				newnode->data=val;
				newnode->next=NULL;
				return newnode;
			}
			else
			cout<<"Node Creation Failed .."<<endl;
		}
		void addFirst(int var)
		{
			Node* newnode=createNode(var);
			if(head==NULL)
			{
				head=newnode;
				tail=newnode;
				count++;
			}
			else
			{
				newnode->next=head;
				head=newnode;
				count++;
			}
			cout<<"Count of element is : "<<count<<endl;
		}
		void addLast(int var)
		{
			Node* newnode=createNode(var);
			if(head==NULL)
			{
				head=newnode;
				tail=newnode;
				count++;
			}
			else
			{
				tail->next=newnode;
				tail=newnode;
				count++;
			}
			cout<<"Count of element is : "<<count<<endl;
		}
		void addatPos(int var,int pos)
		{
			Node* newnode=createNode(var);
			if(pos==1)
			{
				addFirst(var);
			}
			/*else if(pos==2)
			{
				head->next=newnode;
				tail=newnode;
				count++;
			}*/
			else
			{
				Node* temp=head;
				int i=1;
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}
				newnode->next=temp->next;
				temp->next=newnode;
				count++;

			}
			cout<<"Count of element is : "<<count<<endl;
		}
		void removeFirst()
		{
			if(head==tail)
			{
				Node *temp=head;
				head=NULL;
				tail=NULL;
				delete temp;
				count--;
			}
			else
			{
				count--;
				Node *temp=head;
				head=temp->next;
				delete temp;
			}
			cout<<"Count of element is : "<<count<<endl;
		}

		void removeLast()
		{
			if(head==tail)
			{
				Node *temp=head;
				head=NULL;
				tail=NULL;
				delete temp;
				count--;
			}
			else
			{
				count--;
				Node *temp=head;
				while(temp->next!=tail)
				{
					temp=temp->next;
				}
				temp->next=NULL;
				delete tail;
				tail=temp;
			}
			cout<<"Count of element is : "<<count<<endl;
		}

		void removefromPos(int pos)
		{
			if(pos==1)
			{
				removeFirst();
			}
			else
			{
				Node* temp=head;
				Node *res=NULL;
				int i=1;
				while(i<pos)
				{
					res=temp;
					temp=temp->next;
					i++;
				}
				res->next=temp->next;
				delete temp;
				count--;

			}
			cout<<"Count of element is : "<<count<<endl;
		}
		
		void removebydata(int da)
		{
			Node* temp=head;
			Node *res=NULL;
			while(temp->data!=da)
			{
				res=temp;
				temp=temp->next;
			}
			res->next=temp->next;
			delete temp;
			count--;
		}

		void reverse()
		{
			Node* prev=NULL;
			Node* curr=head;
			Node* fur=head->next;
			while(curr!=tail)
			{
				curr->next=prev;
				prev=curr;
				curr=fur;
				fur=fur->next;
			}
			curr->next=prev;
			tail=head;
			head=curr;
		}

		void display()
		{
			cout<<"Elememt are : ";
			Node* trav=head;
			while(trav!=NULL)
			{
				cout<<trav->data<<" ";
				trav=trav->next;
			}
			cout<<endl;
			cout<<"Count of element is : "<<count<<endl;
		}
		~List()
		{
			Node* trav=head;
			while(trav!=NULL)
			{
				head=head->next;
				delete trav;
				trav=head;
			}
		}

};

int menu_list()
{
	int choice;
	cout<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"1.Add at First "<<endl;
	cout<<"2.Add at Last"<<endl;
	cout<<"3.Add at position"<<endl;
	cout<<"4.Remove from First "<<endl;
	cout<<"5.Remoe from Last"<<endl;
	cout<<"6.Remove from position"<<endl;
	cout<<"7.Remove by Data"<<endl;
	cout<<"8.Reverse"<<endl;
	cout<<"9.Display"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return choice;
}

int main()
{
	int choice;
	List l;
	while((choice=menu_list())!=0)
	{
		switch(choice)
		{
			case 1:
				int a;
				cout<<"Enter the Element to Add :";
				cin>>a;
				l.addFirst(a);
				break;
			case 2:
				int b;
				cout<<"Enter the Element to Add :";
				cin>>b;
				l.addLast(b);
				break;
			case 3:
				int c,p;
				cout<<"Enter the position to Add element :";
				cin>>p;
				cout<<"Enter the Element to Add :";
				cin>>c;
				l.addatPos(c,p);
				break;
			case 4:
				l.removeFirst();
				break;
			case 5:
				l.removeLast();
				break;
			case 6:
				int d;
				cout<<"Enter the position to Add element :";
				cin>>d;
				l.removefromPos(d);
				break;
			case 7:
				int k;
				cout<<"Enter the data to delete :";
				cin>>k;
				l.removebydata(k);
				break;
			case 8:
				l.reverse();
				break;
			case 9:
				l.display();
				break;
			default:
				cout<<"Invalid Choice .."<<endl;
				break;
		}
	}
	return 0;
}
