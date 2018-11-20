#include <stdio.h>
#include <stdlib.h>

// Example: Input array values: 35, 20, 40, 100, 3, 10, 15
void insertion_sort(int *a, int length_a)
{
  int k, temp;
  //Number of passes 
  for(int j=1; j<length_a; j++)
    {
      temp = a[j];
      k = j-1;
      //Number of comparisons in each pass
      while((temp < a[k]) && (k >=0))
       {
         a[k+1] = a[k];
         k = k-1;
       }  
      a[k+1]=temp;    
    }
}
int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);

int a[length_a];
printf("\n Enter %d elements into Array to sort using insertion sort:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

insertion_sort(a, length_a);
printf("\n Array elements after sorting using insertion sort: ");
for(int i=0; i<length_a; i++)
printf("%d ", a[i]);
return 0;
}
