#include <iostream>
using namespace std;

void max_heapify(int arr[], int n, int i)
{
    int largest = i;  
    int l = 2 * i + 1;  
    int r = 2 * i + 2;  
 
    
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
   
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
   
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 
        
        max_heapify(arr, n, largest);
    }
}

void swap(int* p,int* q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}

 
// simple function to do heap sort
void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        max_heapify(arr, n, i);
 
   
    for (int i=n-1; i>=0; i--)
    {
        
        swap(arr[0], arr[i]);
 
       
        max_heapify(arr, i, 0);
    }
}
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 

int main()
{
    int arr[100];
    int i;
    int n;
    cout<<"How many elements you want to enter?\n";
    cin>>n;
    cout<<"Enter the "<<n<<" elements:\n";
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
  //  i = sizeof(arr)/sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array:\n";
    printArray(arr, n);
}
