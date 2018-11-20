#include<iostream>
using namespace std;
void insertionSort(int a[],int len)
{
	int i,j,key;
	for(i=1;i<len;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	cout<<"Sorted array is  ::  "<<endl;
	for(i=0;i<len;i++)
	{
		cout<<" i :: "<<i<<" -> "<<a[i]<<endl;
	}
	
}//end of insertionSort

int main()
{
	int i,len;
	cout<<"Enter the length of array :: ";
	cin>>len;
	cout<<endl;
	int a[len];
	cout<<"Enter Elements in array :: ";
	for(i=0;i<len;i++)
	{
		cin>>a[i];
	}
	
	insertionSort(a,len);
	
	return 0;
}//End OF Main
