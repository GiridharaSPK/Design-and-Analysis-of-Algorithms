#include<stdio.h>
/*int countNum(int [int ],int);*/
/*void printArray(int [int]);*/

int main()
{
 int ar[7]={1,4,1,2,7,5,2}; 
 int range_min=0,range_max=9;
 int count[range_max-range_min+1];
 int output[7]; 
 int i,j;
 int sum=0;
 
/* for(i=range_min;i<range_max-range_min+1;i++)*/
/* {*/
/*  count[i]=countNum(ar,i);*/
/* }*/
 
/* for(i=range_min;i<range_max-range_min+1;i++)*/
/* {*/
/*  sum=sum+count[i];*/
/*  count[i]=sum;*/
/* }*/
 
 for(j=range_min;j<range_max-range_min+1;j++)
 { 
  for(i=0;i<7;i++)
  {
   if(j==ar[i]) count[j]++;
  }
 }
 
 for(int i=0;i<7;i++)
 printf("%d  ",output[i]);

} 


