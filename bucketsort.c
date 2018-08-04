#include<stdio.h>
void insertinorder(int[],int);
int main()
{
 int n,i,j,bi;
 float buc[n][n];
 float arr[n]={0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
 
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  bi=n*arr[i];
/*  buc[bi][j]=arr[i];*/
  insertinorder(buc[bi],arr[i]);  
 }
 
}

void insertinorder(int[] ar,int p)
{ 
 int i=0,n=sizeof(ar)/sizeof(ar[0]);
 
 
}




#include <stdio.h>
 
/* Function for bucket sort */
void Bucket_Sort(int array[], int n)
{  
    int i, j;  
    int count[n]; 
    for (i = 0; i < n; i++)
        count[i] = 0;
 
    for (i = 0; i < n; i++)
        (count[array[i]])++;
 
    for (i = 0, j = 0; i < n; i++)  
        for(; count[i] > 0; (count[i])--)
            array[j++] = i;
}   
/* End of Bucket_Sort() */
 
/* The main() begins */
int main()
{
    int array[100], i, num; 
 
    printf("Enter the size of array : ");   
    scanf("%d", &num);   
    printf("Enter the %d elements to be sorted:\n",num); 
    for (i = 0; i < num; i++)
        scanf("%d", &array[i]); 
    printf("\nThe array of elements before sorting : \n");
    for (i = 0; i < num; i++)
        printf("%d ", array[i]);  
    printf("\nThe array of elements after sorting : \n"); 
    Bucket_Sort(array, num); 
    for (i = 0; i < num; i++)
        printf("%d ", array[i]);   
    printf("\n");     
    return 0;
}
