#include <stdio.h>
#include <stdlib.h>

// Example: Input array values: 20, 35, 40, 100, 3, 10, 15
void selection_sort(int *a, int length_a)
{
  int small, loc, temp;
  //Number of passes 
  for(int j=1; j<length_a; j++)
    {
      small = a[j-1];
      loc = j-1;
      //Number of comparisons in each pass
      for(int k=j; k<length_a; k++)
      if(a[k] < small)
         {
           small = a[k];
           loc = k;
         }
      if(loc != (j-1))
       {
          temp = a[j-1];
          a[j-1] = a[loc];
          a[loc] = temp;
       }
    }
}
int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);

int a[length_a];
printf("\n Enter %d elements into Array to sort using selection sort:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

selection_sort(a, length_a);
printf("\n Array elements after sorting using selection sort: ");
for(int i=0; i<length_a; i++)
printf("%d ", a[i]);
return 0;
}
