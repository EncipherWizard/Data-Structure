#include <stdio.h>
#include <stdlib.h>

int sequential_search(int *a, int length_a, int ele)
{
  for(int j=0; j<length_a; j++)
    {
      if(a[j]==ele)
         return j;
    }
return -1;
}
int main(){

int length_a;
printf("\n Enter the size of Array:");
scanf("%d", &length_a);

int a[length_a];
printf("\n Enter %d elements into Array:", length_a);
for(int i=0; i<length_a; i++)
scanf("%d", &a[i]);

int ele;
printf("\n Enter an element to search in Array:");
scanf("%d", &ele);

int loc = sequential_search(a, length_a, ele);
if(loc>=0)
 printf("\n Element %d present in Array at location %d", ele, loc);
else
 printf("\n Element NOT present in the Array");
return 0;
}
