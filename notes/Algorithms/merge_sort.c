#include <stdio.h>
#include <stdlib.h>
int Size;
// Example: Input array values: 33, 26, 35, 29, 18, 10, 24

void merging_sorted_subarrays(int a[Size], int lb, int lr, int rb, int rr)
{
  int na, nb, nc, c[Size];
  na = lb;
  nb = rb;
  nc = lb;
  while( na <= lr && nb <= rr)
   {
     if(a[na] < a[nb])
       c[nc] = a[na++];
     else
       c[nc] = a[nb++];
     nc++;
   }
  if(na > lr)
  {
    while( nb <= rr)
    c[nc++] = a[nb++];
  }
  else
  {
    while(na <= lr)
    c[nc++] = a[na++];
  }
 for(int k = lb; k<=rr; k++)
  a[k] = c[k];
}
void merge_sort(int a[], int beg, int end)
{
  if(beg < end)
   {
     int mid = (beg+end)/2;
     merge_sort(a, beg, mid);
     merge_sort(a, mid+1, end);
     merging_sorted_subarrays(a, beg, mid, mid+1, end);          
   }
}
int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);
Size=length_a;

int a[length_a];
printf("\n Enter %d elements into Array to sort using merge sort:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

merge_sort(a, 0, length_a-1);
printf("\n Array elements after sorting using merge sort: ");
for(int i=0; i<length_a; i++)
printf("%d ", a[i]);
return 0;
}
