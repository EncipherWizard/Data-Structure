#include <stdio.h>
#include <stdlib.h>

// Example: Input array values: 12, 40, 3, 2, 15 
void bubble_sort(int *a, int length_a)
{
  //Number of passes 
  for(int j=1; j<length_a; j++)
    {
      //Number of comparisons in each pass
      for(int k=0; k<length_a-j; k++)
      if(a[k] > a[k+1])
         {
           int temp = a[k];
           a[k] = a[k+1];
           a[k+1] = temp;
         }
    }
}
int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);

int a[length_a];
printf("\n Enter %d elements into Array to sort using bubble sort:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

bubble_sort(a, length_a);
printf("\n Array elements after sorting using bubble sort: ");
for(int i=0; i<length_a; i++)
printf("%d ", a[i]);
return 0;
}
