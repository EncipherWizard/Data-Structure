#include<iostream>
using namespace std;

int binarySearch(int a[],int length,int el)
{
	int big=0,end=length-1;
	int mid=(big+end)/2;
	//cout<<"mid"<<mid<<endl;
	if(a[mid]==el)
	return mid;
	
	while(big<=end && a[mid]!=el)
	{
		if(el<a[mid])
		{
			end=mid-1;
			mid=(big+end)/2;
			//cout<<"mid"<<mid<<endl;
			if(a[mid]==el)
			return mid;
		}
		else if(el>a[mid])
		{
			big=mid+1;
			mid=(big+end)/2;
			//cout<<"mid"<<mid<<endl;
			if(a[mid]==el)
			return mid;
		}
	}	
	
}
int main()
{
	int i,length,el;
	cout<<"Enter the Length of Array :: ";
	cin>>length;
	
	int arr[length];
	
	cout<<"Enter Element in the array :: ";
	for(i=0;i<length;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Enter Element to Search :: ";
	cin>>el;
	cout<<endl;
	
	int j=binarySearch(arr,length,el);
	cout<<"Element at :: a["<<j<<"] \nELement is :: "<<arr[j]<<endl;
	return 0;
	
}
