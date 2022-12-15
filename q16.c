#include<stdio.h>
// lab sheet quection.. student mark case
int main(){
	
	int mark[3][3];
	int i,j;
	for(i=0;i<=2;i++){
		printf("STUDENT %d : \n",i+1);
		for(j=0;j<=2;j++){
			printf("Enter Marks : ");
			scanf("%d",&mark[i][j]);
		}
	}
	printf("\n");
	float total=0;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		total +=mark[i][j];
		}
		printf("Student %d Average mark is %.2f\n",i+1,total/3.0);
		total = 0;
	}
	
	
	
	
	return 0;
}
