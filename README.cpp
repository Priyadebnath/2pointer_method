# 2pointer_method
find pair of sum in a array
#include <stdio.h>
#include<stdlib.h>
int main() {
  int arr[]={1,1,2,2,2,2,3,3,3,4,8,9};
  int size=sizeof(arr)/sizeof(arr[0]);
  printf("the size of array is:%d\n",size);
  int i=0,j=size-1,count=0;
  while(i<j)
  {
    if(arr[i]+arr[j]>5)
    j--;
    else if(arr[i]+arr[j]<5)
    i++;
    else if(arr[i]+arr[j]==5)
    {
    count++;
    i++;
  }
  }
  printf("the number of pair is:%d",count);
  return 0;
}
