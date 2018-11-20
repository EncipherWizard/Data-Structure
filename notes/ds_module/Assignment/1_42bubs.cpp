#include<iostream>
using namespace std;
int bub_sort(int *arr,int size)
{
	for(int j=1;j<size;j++)
	{
		for(int k=0;k<size-1;k++)
		{
			if(arr[k]>arr[k+1])
			{
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
	cout<<"Data after Sort : ";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
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
		cin>>arr[i];
	
	bub_sort(arr,size);
	/*cout<<"Data after Bubble Sort : ";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;*/
	return 0;
}
