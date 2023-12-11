#include<stdio.h>
void main(){
	
	int i,j, n,m, s;

	 printf("Enter size of row:- ");
	 scanf("%d",&n);
	 printf("Enter size of column:- ");
	 scanf("%d",&m);
	 
	 	int a[n][m];
	 	
	for(i=0; i<n; i++){
	for(j=0; j<m; j++){
	
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		}
	}
		for(i=0; i<n; i++){
	for(j=0; j<m; j++){
			printf("%d",a[i][j]);
		
	    	}
	    	printf("\n");
		}
		printf("\n");
		printf("\n");
	for(i=0; i<n; i++){
	for(j=0; j<m; j++){
			printf("%d",a[j][i]);
		
	    	}
	    	printf("\n");
		}
}
