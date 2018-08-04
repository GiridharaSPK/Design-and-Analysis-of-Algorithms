#include <stdio.h>
void swap(int*, int*);
void BubbleSort(int[], int );
void printArray(int[],int);

int main()
{
  int A[]={2,45,62,7,90,0};
  int n=sizeof(A)/sizeof(A[0]);

  BubbleSort(A,n);
  return 0;
}

void BubbleSort(int A[],int n)
{
  int swapped, i, j,temp;
  // n=sizeof(A)/sizeof(A[0]);   //sizeof is not working when used in a function
   for(i=0;i<n;i++)
  {
    swapped=0;
    for(j=0;j<n-i-1;j++)
    {
      if(A[j]>A[j+1])
      {
        // temp=A[j];
        // A[j]=A[j+1];
        // A[j+1]=temp;
        swap(&A[j],&A[j+1]);
        swapped=1;
      }
    }
    if(swapped==0)
      break;
  }
  printArray(A,n);
}

void swap(int *a, int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void printArray(int A[],int n)
{
  for(int i=0;i<n;i++)
    printf(" %d ",A[i]);
}
