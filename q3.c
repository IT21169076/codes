#include<stdio.h>
//boxes volume
int main(){
	
	int boxes[4][3];
	int volume[4];
	int i,j;
	
	for(i=0;i<=3;i++){
		printf("BOX %d : \n",i+1);
		for(j=0;j<=2;j++){
			printf("Enter size : ");
			scanf("%d",&boxes[i][j]);
		}
	}
	printf("Sizes : \n");
	for(i=0;i<=3;i++){
		for(j=0;j<=2;j++){
			printf("%d ",boxes[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=3;i++){
		int vol=1;
		int t;
		for(j=0;j<=2;j++){
			vol = vol*boxes[i][j];
		}
		volume[i]=vol;
	
	}
	
	printf("Volume of each Box : \n");
	for(i=0;i<=3;i++){
		printf("%d ",volume[i]);
		printf("\n");
	}
	
	return 0;
}
