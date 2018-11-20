#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *left;
		Node *right;
	public:
		Node()
		{
			data=0;
			left=NULL;
			right=NULL;
		}
};
class bst
{
	private:
		Node *root;
	public:
		bst()
		{
			root=NULL;
		}
		Node* createNode(int val)
		{
			Node* newnode=new Node;
			newnode->data=val;
			newnode->left=NULL;
			newnode->right=NULL;
			return newnode;
		}
		
		void addelement(int ele)
		{
			Node* newnode=createNode(ele);
			if(root==NULL)
			{
				root=newnode;
			}
			else
			{
				Node* temp=root;
				while(temp!=NULL)
				{
					if(newnode->data < temp->data)
					{
						if(temp->left==NULL)
						{
							temp->left=newnode;
							break;
						}
						else
						{
							temp=temp->left;
						}
					}
					else
					{
						if(temp->right==NULL)
						{
							temp->right=newnode;
							break;
						}
						else
						{
							temp=temp->right;
						}
					}
				}
			}
		}

		void traverse()
		{
			Node* temp=root;
			cout<<temp->data<<" ";
			
		}
};

int menu()
{
	int choice;
	cout<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"1.Add element"<<endl;
	cout<<"2.Traverse"<<endl;
	cout<<"Enter your Choice :";
	cin>>choice;
	return choice;
}
int main()
{
	int choice;
	bst b1;
	while((choice=menu())!=0)
	{
		switch(choice)
		{
			case 1:
				int a;
				cout<<"Enter the Data To add :";
				cin>>a;
				b1.addelement(a);
				break;
			case 2:
				b1.traverse();
				break;
		}
	}
	return 0;
}
