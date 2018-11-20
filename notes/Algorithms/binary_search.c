#include <stdio.h>
#include <stdlib.h>

int binary_search(int *a, int length_a, int ele)
{
  int beg = 0, end = length_a-1;
  int mid = (beg+end)/2;
  if(a[mid]==ele)
    return mid;
  
   while((beg<=end) && (a[mid]!=ele))
    {
      if(ele < a[mid])
        end = mid - 1;
      else
        beg = mid + 1;
     mid = (beg+end)/2;
     if(a[mid]==ele)
     return mid;
    }
 if(beg > end)
   return -1;
}
int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);

int a[length_a];
printf("\n Enter %d elements into Array in sorted order:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

int ele;
printf("\n Enter an element to search in Array:");
scanf("%d", &ele);

int loc = binary_search(a, length_a, ele);
if(loc>=0)
 printf("\n Element %d present in Array at location %d", ele, loc);
else
 printf("\n Element NOT present in the Array");
return 0;
}
