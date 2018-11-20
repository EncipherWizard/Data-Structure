#include<iostream>
using namespace std;
void ins_sort(int *arr,int size)
{
	int ele,k;
	for(int j=0;j<size-1;j++)
	{
		for(k=j+1;k<size;k++)
		{
			if(arr[j]>arr[k])
			{
				int temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
				k=j+1;
			}
	cout<<"Array element After are:";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
		}
	}
}

int main()
{
	int element,size;
	cout<<"Enter the Size of Array : ";
	cin>>size;

	int arr[size];
	cout<<"Enter the Array element :"<<endl;
	for(int i=0;i<size;i++)
		cin>>arr[i];

	ins_sort(arr,size);
	/*cout<<"Array element are:"<<endl;
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;*/
	return 0;
}
