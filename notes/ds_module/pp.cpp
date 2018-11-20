#include<iostream>
using namespace std;
int main()
{
	int size,i=0;
	cout<<"Enter the size of array :";
	cin>>size;
	int arr[size];
	cout<<"Element of Array :";

	while(i<size)
	{
		cin>>arr[i];
		if(i==size-4)
			break;
		i++;
	}
	return 0;
}
