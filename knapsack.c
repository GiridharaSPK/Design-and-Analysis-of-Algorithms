#include<stdio.h>

int main()
{
 int m=15,i=0,j=0,n,temp,profit=0;
 int w[]={2,3,5,7,1,4,1};
 float p[]={10,5,15,7,6,18,3};
 float ppw[n],tempf;
 int ind[n];
 
 n=sizeof(w)/sizeof(w[0]);
 
 for(i=0;i<n;i++)
 {
  ppw[i]=p[i]/w[i];
 } 
  
  for(i=0;i<n;i++)
 {
  printf("%f ",ppw[i]);
 } 
 printf("\n");
 
 
 for(j=0;j<n-1;j++)
 for(i=0;i<n-1;i++)
 {
  if(ppw[i]<ppw[i+1]) 
  {
   tempf=ppw[i+1];
   ppw[i+1]=ppw[i];
   ppw[i]=tempf;
   
   temp=w[i+1];
   w[i+1]=w[i];
   w[i]=temp;
   
   tempf=p[i+1];
   p[i+1]=p[i];
   p[i]=tempf;
  }
 }

/* for(i=0;i<n;i++)*/
/* {*/
/*  printf("%f \t",p[i]);*/
/* } */
/* printf("\n");*/
/* */
/* for(i=0;i<n;i++)*/
/* {*/
/*  printf("%d \t",w[i]);*/
/* }*/
/* printf("\n");*/
/* */
/* for(i=0;i<n;i++)*/
/* {*/
/*  printf("%f ",ppw[i]);*/
/* } */
/* printf("\n");*/
 

 
/* i=0;*/
 while(m>0&&w[i]<=m)
 {
  m-=w[i];
  ind[i]=w[i];
  i++;
  profit+=p[i];
 }
 
 while(m>0&&w[i]>m)
 {
  m-=ppw[i];
 }
 ind[i]=w[i];
 profit+=p[i];
 
 printf("\nThe input array is: \n");
 
 for(i=0;i<n;i++)
 {
  printf("%d",ind[i]);
 }
 
 printf("Total profit= %d",profit);
}
