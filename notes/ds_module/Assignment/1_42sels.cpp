#include<iostream>
using namespace std;

int sel_sort(int *arr,int size)
{
	int small,i,j,loc;
	for(i=0;i<size-1;i++)
	{
		small=arr[i];
		loc=i;
		for(j=i+1;j<size;j++)
		{
			if(small>arr[j])
			{
				small=arr[j];
				loc=j;
			}
		}
		if(loc != i)
		{
			int temp=arr[i];
			arr[i]=arr[loc];
			arr[loc]=temp;
		}
	}
	return 0;
}
int main()
{
	int size;
	cout<<"Enter the Size of Array :";
	cin>>size;

	int arr[size];
	cout<<"Enter the "<<size<<" Element of Array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	sel_sort(arr,size);
	cout<<"Data after Salection Sort : ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
