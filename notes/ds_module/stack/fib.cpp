#include<iostream>
using namespace std;

int rec(int n)
{
	int add;
	if(n==1)
	{
		cout<<1<<" ";
		return 1;
	}
	if(n==0)
	{
		cout<<0<<" ";
		return 0;
	}
	add =rec(n-2)+rec(n-1);
	cout<<add<<" ";
	return add;
}
int main()
{
	int n;
	cout<<"Enter the number Upto fibonacci Series :";
	cin>>n;
	rec(n);
	return 0;
}
