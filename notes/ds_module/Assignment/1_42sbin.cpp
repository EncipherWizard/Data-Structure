#include<iostream>
using namespace std;

int bin_search(int arr[],int size,int ele)
{
	int b=0,e=size-1,m;
	m=(b+e)/2;
	if(arr[m]!=ele)
	{
		while(arr[m]!=ele)
		{
			if(ele < arr[m])
			{
				e=m-1;
				m=(b+e)/2;
			}
			else
			{
				b=m+1;
				m=(b+e)/2;
			}
			if(b==e+1||e==b-1)
				return 0;
		}
		return m;
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
	
	int val=bin_search(arr,size,ele);
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
