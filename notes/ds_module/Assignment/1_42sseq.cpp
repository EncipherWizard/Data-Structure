#include<iostream>
using namespace std;

int seq_search(int arr[],int size,int ele)
{
	for(int j=0;j<size;j++)
	{
		if(arr[j]==ele)
		{
			return j;
		}
	}
	return 0;
}
int main()
{
	int size,ele;
	cout<<"Enter the Size of Array :";
	cin>>size;

	int arr[size];
	cout<<"Enter the "<<size<<" Element of Array : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	cout<<"Enter element to Search : ";
	cin>>ele;
	
	int val=seq_search(arr,size,ele);
	if(val)
	{
		cout<<"The "<<ele<<" Fount at Array location is "<<val<<endl;
	}
	else
	{
		cout<<"Element Not Found in Array "<<endl;
	}
	return 0;
}
