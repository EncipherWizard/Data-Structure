#include<iostream>
using namespace std;

int bubbleSort(int a[],int length)
{
	int i,j,temp;
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			if(a[i]<a[j])
			{
				/*cout<<"a["<<i<<"] = "<<a[i]<<endl;
				cout<<"a["<<j<<"] = "<<a[j]<<endl;*/
				temp=a[i];
				//cout<<"temp :: "<<temp<<endl;
				a[i]=a[j];
				//cout<<"a["<<i<<"] = "<<a[i]<<endl;
			
				a[j]=temp;
				//cout<<"a["<<j<<"] = "<<a[j]<<endl<<endl<<endl;
			}
		}
	}
	
	for(i=0;i<length;i++)
	{
		cout<<a[i]<<endl;
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
	/*cout<<"Enter Element to Search :: ";
	cin>>el;*/
	cout<<endl;
	bubbleSort(arr,length);
	/*int j[length]=binarySearch(arr,length);
	for(i=0;i<length;i++)
	{
		cout<<j[i];
	}
	cout<<"Element at :: a["<<j<<"] \nELement is :: "<<arr[j]<<endl;*/
	return 0;
	
}
