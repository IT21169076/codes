#include<stdio.h>

int main(){
	int num1=10,num2=31,num3=30;
	
	if(num1>num2)
		if(num1>num3)
			printf("Largest number is %d",num1);
		if(num2>num3)
			printf("%d",num2);
		printf("%d",num3);
	
	return 0;
}
