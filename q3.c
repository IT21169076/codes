#include <stdio.h>
int main()
{
	int a[4][4]={{5,7,8,10},{9,3,0,6},{8,1,9,2},{4,7,2,1}};
	int b[4][4]={{2,2,1,3},{8,1,3,1},{1,2,2,4},{3,1,1,2}};
	int c[4][4];
	int i,j;

	printf("Enter 4*4 Values for matrix 1:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");	
	}
		
	printf("Enter 4*4 Values for matrix 2:\n");
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf(" %d",b[i][j]);
		}
		printf("\n");	
	}
		
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			c[i][j]=a[i][j]+b[i][j];
		printf("\n");
	printf("The value of matrixes are :\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%6d",c[i][j]);
		}
		printf("\n");	
	}
       
		
	

}
