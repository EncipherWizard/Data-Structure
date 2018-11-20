#include<iostream>
using namespace std;

int sequentialSearch(int a[],int length,int el)
{
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i]==el)
		return i;
	}
}

int main()
{
	int length,el,i;
	cout<<"Enter the Length of Array :: ";
	cin>>length;
	int arr[length];
	cout<<"Enter Elements in Array :: ";
	for(i=0;i<length;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the Element to find :: ";
	cin>>el;
	i=sequentialSearch(arr,length,el);
	cout<<"Element at :: a["<<i<<"] \nELement is :: "<<arr[i]<<endl;
	return 0;
	
	
}

