#include<stdio.h>

int main(){
	
	
	FILE *file;
	file = fopen("number.dat","w");
	int i,number;
	while(i<=4){
		printf("Enter number : ");
		int num = scanf("%d",&number);
		fprintf(file, "%d",num);
		i++;
	}
	return 0;
}
