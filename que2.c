#include<stdio.h>

void main(){
  int row,column,i,j;
   printf("Enter row size:");
  scanf("%d",&row);
  
  printf("Enter Column size:");
  scanf("%d",&column);
  
  int a[row][column],large;
  
  for(i=0;i<row;i++){
  	for(j=0;j<column;j++){
  		printf("Enter a[%d][%d]:",i,j);
  		scanf("%d",&a[i][j]);
  		large=a[i][j];
	  }
  }
  
  printf("The largest element is :%d\n",large);
  for(i=0;i<row;i++){
  	for(j=0;j<column;j++){
  		large>a[i][j];
        }
    }
}
 
