#include<stdio.h>

int main(){
	int num1,num2,cal;
	char op;
	
	printf("Enter First Value : ");
	scanf("%d",&num1);
	
	printf("Enter Second Value : ");
	scanf("%d",&num2);
	
	printf("Enter Operator : ");
	scanf(" %c",&op);
		
	switch(op){
		case '+':
			cal = num1+num2;
			printf("%d",cal);
			break;
		case '-':
			cal = num1-num2;
			printf("%d",cal);
			break;
		case '/':
			cal = num1/num2;
			printf("%d",cal);
			break;
		case '*':
			cal = num1*num2;
			printf("%d",cal);
			break;
		default:
			printf("Invalid operator..");
			break;
	}
	return 0;
}
