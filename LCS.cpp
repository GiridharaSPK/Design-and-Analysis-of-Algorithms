#include<iostream>
#include<string.h>
using namespace std;

int LCS(char* A,char*B,int i,int j){
  if(i==0 || j==0){
    return 0;
  }
  if(A[i-1]==B[j-1]){
    return 1+LCS(A,B,i-1,j-1);
  }else{
    return max(LCS(A,B,i,j-1),LCS(A,B,i-1,j));
  }
}

int max(int a,int b){
  return (a>b)?a:b;
}

int main(){
  char A[] = "AGGTAB";
  char B[] = "GXTXAYB";
  int m = strlen(A);
  int n = strlen(B);
  // int m = 6;
  // int n = 7;
  cout<<LCS(A,B,m,n);
  return 0;
}
