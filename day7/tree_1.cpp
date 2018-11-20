#include<iostream>
using namespace std;

typedef struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

class Tree
{
	private:
	Node *root;
	int totNodes;
	public:
	Tree()
	{
		root=NULL;
		totNodes=0;
	}
	
	bool isEmpty()
	{
		if(root==NULL)
		return true;
		else
		return false;
	}
	Node* createNode(int val)
	{
		Node* newNode=new Node;
		newNode->data=val;
		newNode->left=NULL;
		newNode->right=NULL;
		return newNode;
	}
	void addNode(int val)
	{
		Node* newNode=createNode(val);
		
		if(isEmpty())
		{
			root=newNode;
			totNodes++;
		}
		else
		{
			Node* temp=root;
			while(temp!=NULL)
			{
				if(newNode->data<temp->data)
				{
					if(temp->left==NULL)
					{
						temp->left=newNode;
						break;
					}
					else
					{
						temp=temp->left;
					}
				}//left Node
				if(newNode->data>temp->data)
				{
					if(temp->right==NULL)
					{
						temp->right=newNode;
						break;
					}
					else
					{
						temp=temp->right;
					}
				}// right node
			}//while loop
		}//else	
		totNodes++;
	}//void addNode
	void inorder(Node* r)
	{
		if(r==NULL)
		return;
		inorder(r->left);
		cout<<r->data<<" ";
		inorder(r->right);
	}
	void preorder(Node* r)
	{
		if(r==NULL)
		return;
		cout<<r->data<<" ";
		preorder(r->left);
		preorder(r->right);
	}
	void postorder(Node* r)
	{
		if(r==NULL)
		return;
		postorder(r->left);
		postorder(r->right);
		cout<<r->data<<" ";
	}
	Node* getRoot()
	{
		return root;
	}
};
int main()
{
	Tree t;
	int choice,val;
	Node *p;
	do{
		cout<<"Enter Suitable Choice"<<endl;
		cout<<"1. Add Node \n2. Delete Node \n3. PreOrder \n4. PostOrder \n5. InOrder \n 6.Exit \n->";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter Value to the Node  ::  ";
				cin>>val;
				t.addNode(val);
				break;
			case 2:
				
				break;
			case 3:
				p=t.getRoot();
				t.preorder(p);
				break;
			case 4:
				p=t.getRoot();
				t.postorder(p);
				break;
			case 5:
				t.inorder(p);
				p=t.getRoot();
				break;
			case 6:
				return 0;
					break;				
			default:
				cout<<"INVALID CHOICE"<<endl;
		}
	}while(choice!=6);	
	
	
	
	
	return 0;	
}
