#include<stdio.h>
int func(int [],int,int);
void swap(int*, int*);
void quicksort(int [], int ,int);

int main()
{
 int q;
 int A[]={2,4,1,53,7,7,32,22};
 int n=sizeof(A)/sizeof(A[0]);
 quicksort(A,1,n);
 
 for(q=0;q<n;q++)
 {
  printf("%d  ",A[q]);
 }
}

int func(int A[],int p, int r)
{
 int pivot,i,j;
 pivot=A[r];
 i=p-1;
 for(j=p;j<r;j++)
 {
  if(A[j]<=pivot)
  {
   swap(&A[j],&A[i]);
   i++;
  }
 }
 swap(&A[i+1], &A[r]);
 return (i+1);
}

void swap(int* a, int* b)
{
 int t = *a;
 *a = *b;
 *b = t; 
}

void quicksort(int A[],int p,int r)
{
 if(p<r)
 {
  int pivot=func(A,p,r);
  quicksort(A,p,pivot-1);
  quicksort(A,pivot,r);
 }
}
