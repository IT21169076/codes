#include<stdio.h>

int main(){
	
	float temp[2][3];
	float avgTemp[2];
	int i,j;
	for(i=0;i<=1;i++){
		printf("City %d\n",i+1);
		for(j=0;j<=2;j++){
			printf("Enter Temperature : ");
			scanf("%f",&temp[i][j]);
		}
	}
	printf("\n");
	float avg,total;
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			total+= temp[i][j];
		}
		avgTemp[i]=total/3.0;
		total = 0;
	}
	
	printf("Print Temperature Array : \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("%.2f ",temp[i][j]);
		}
		printf("\n");
	}
	printf("Print Average Temperature Array : \n");
	for(i=0;i<=1;i++){
		printf("%.1f",avgTemp[i]);
		printf("\n");
	}
	
	return 0;
}
