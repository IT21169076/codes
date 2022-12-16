#include<stdio.h>

int main(){
	
	int num1, num2, cal; //decleration of integer variables
	char op; //decleration of character variables

	printf("Enter First Number : ");
	scanf("%d", &num1); 

	printf("Enter Second Number : ");
	scanf("%d", &num2); 

	printf("Choose Any Operator: +  -  /  * \n");
	scanf(" %c", &op);
	
		
	if(op== '+'){
		cal = num1+num2;
		printf("Sumation is : %d",cal);
	}else if(op== '-'){
			cal = num1-num2;
			printf("Subctraction is : %d",cal);
	}else if(op=='/'){
		cal = num1/num2;
		printf("Division is : %d",cal);
	}else if(op=='*'){
		cal = num1*num2;
		printf("Multiplication is : %d",cal);
	}
		
	
		
	
	return 0;
}
