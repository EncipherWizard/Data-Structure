#include<iostream>
using namespace std;

/*void swap(int* a1,int* a2)
{
	int temp;
	temp=*a1;
	*a1=*a2;
	*a1=temp;
}*/
int bubbleSort(int a[],int length)
{
	int i,j,min_i;
	int temp;
	for(i=0;i<length;i++)
	{
		min_i=i;
		for(j=0;j<length;j++)
		{
			if(a[j]<a[min_i])
			{
				min_i=j;
			}
			temp=a[min_i];
			a[min_i]=a[j];
			a[j]=temp;
			//swap(a[i],a[min_i]);
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
