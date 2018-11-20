#include <stdio.h>
#include <stdlib.h>
// Example: Input array values: 9, 6, 5, 0, 8, 2, 1, 3

void max_heapify(int a[], int n, int i)
{
    int max = i;
    int left = 2*i+1;
    int right = 2*i+2;
 
    if (left < n && a[left] > a[max])
        max = left;
 
    if (right < n && a[right] > a[max])
        max = right;

    if (max != i)
    {
        int temp = a[max];
        a[max] = a[i];
        a[i] = temp;
        max_heapify(a, n, max);
    }
}

void heap_sort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        max_heapify(a, n, i);

    for (int i=n-1; i>=0; i--)
    {
        int temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        max_heapify(a, i, 0);
    }
}

int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);

int a[length_a];
printf("\n Enter %d elements into Array to sort using heap sort:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

heap_sort(a, length_a);
printf("\n Array elements after sorting using heap sort: ");
for(int i=0; i<length_a; i++)
printf("%d ", a[i]);
return 0;
}
