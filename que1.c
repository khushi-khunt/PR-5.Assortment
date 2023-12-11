#include<stdio.h>

void main(){
  int n,count;
  printf("Enter the array size:-");
  scanf("%d",&n);
  
  int a[n];
  int i;
  printf("Enter the value of element:-\n");
  
  for(i=0;i<n;i++)
  {
 	printf("Enter a[%d]:",i);
 	scanf("%d",&a[i]);
  }
   printf("Negative elements from array is\n");
   for(i=0;i<n;i++){
    if(a[i]<0)
  	printf("%d\n",a[i]);
  }
 }

 
