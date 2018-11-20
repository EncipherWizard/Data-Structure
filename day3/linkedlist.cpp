#include<iostream>
using namespace std;

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

class Linkedlist
{
	private:
	Node* first;
	Node* last;
	int totNode;
	public:
	Linkedlist()
	{
		first=NULL;
		last=NULL;
		totNode=0;
	}
	Node *createNode(int val)
	{
		Node* newNode=new Node;
		if(new Node!=NULL)
		{
			newNode->data=val;
			newNode->next=NULL;
			return newNode;
		}
		else
		{
			throw "Storage Full";
		}
	}//end of create Node
	
	bool isEmpty()
	{
		if(first==NULL&& last==NULL)
		return true;
		else 
		return false;
	}
	
	void addNode(int val)
	{
		Node* newNode=createNode(val);
		if(isEmpty())
		{
			first=newNode;
			last=newNode;
			totNode++;
		}
		else
		{
			last->next=newNode;
			last=newNode;
			totNode++;
		}
	}
	void insert(int val,int pos)
	{
		Node* newNode=createNode(val);
		/*if(isEmpty())
		{
			first=newNode;
			last=newNode;
		}*/
		if(pos==1)
		{
			newNode->next=first;
			first=newNode;
		}
		else if(pos>totNode)
		{
			last->next=newNode;
			last=newNode;
		}
		else
		{
			int i;
			Node* temp=first;
			for(i=0;i<pos-1;i++)
			{
				temp=temp->next;
			}
			newNode->next=temp->next;
			temp->next=newNode;
			
		}
		totNode++;
	}
	void Display()
	{
		Node *temp=first;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	void deleteLast()
	{
		Node *temp;
		temp=first;
		for(int i;i<totNode-1;i++)
		{
			temp=temp->next;
		}
		cout<<temp->next->data<<endl;
		last=temp--;
		totNode--;
	}
	/*void deleteNodebyPos(int pos)
	{
		Node* temp=first;
		Node* temp1=NULL;
		int i;
		for(i=0;i<=pos;i++)
		{
			Node* temp1=temp->next;
		}
		
		temp->next=temp->next->next;
		delete temp1;

	}*/
	~Linkedlist()
	{
		Node *temp=first;
		while(temp!=NULL)
		{
			first=first->next;
			delete temp;
			temp=first;
		}
	}
};

int main()
{
	Linkedlist l1;
	int val;
	cout<<"Enter the Value :: ";
	cin>>val;
	l1.addNode(val);
l1.addNode(55);
	l1.addNode(3);
	l1.insert(5,2);
	l1.deleteLast();
	l1.Display();
	return 0;
}
