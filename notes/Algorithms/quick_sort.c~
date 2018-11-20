#include <stdio.h>
#include <stdlib.h>
// Example: Input array values: 25, 10, 30, 15, 20, 28

void split_array(int a[], int beg, int end, int *loc)
{
  int left, right, temp;
  int done = 0;
  *loc = left = beg;
  right = end;
  while(!done)
  {
    while((a[*loc] <= a[right]) && (*loc !=right))
     right--;
    if(a[*loc] > a[right])
      {
        temp = a[*loc];
        a[*loc] = a[right];
        a[right] = temp;
        *loc = right;
      }
      else if(*loc == right)
      done = 1;
    if(!done)
    {
      while((a[*loc] >= a[left]) && (*loc != left))
        left++;
      if(a[*loc] < a[left])
      {
        temp = a[*loc];
        a[*loc] = a[left];
        a[left] = temp;
        *loc = left;
      }
      else if(*loc == left)
      done = 1;   
    }
  }
}
void quick_sort(int a[], int beg, int end)
{
 int loc;
 if(beg < end)
   {
     split_array(a, beg, end, &loc);
     quick_sort(a, beg, loc-1);
     quick_sort(a, loc+1, end);          
   }
}

int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);

int a[length_a];
printf("\n Enter %d elements into Array to sort using merge sort:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

quick_sort(a, 0, length_a-1);
printf("\n Array elements after sorting using merge sort: ");
for(int i=0; i<length_a; i++)
printf("%d ", a[i]);
return 0;
}
