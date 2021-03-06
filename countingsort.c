#include <stdio.h>
#define RANGE 255

void countSort(int arr[])
{
    int output[sizeof(arr)/sizeof(arr[0])];
 
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));
 
    for(i = 0; arr[i]; ++i)
        ++count[arr[i]];
 
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];
 
    for (i = 0; arr[i]; ++i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }
 
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}
 
int main()
{
   int arr[] = {1,4,1,2,7,5,2};
   int i;
    countSort(arr);
 
    for(i=0;i<7;i++)
    {
     printf("%d",arr[i]);
    }
    return 0;
}
