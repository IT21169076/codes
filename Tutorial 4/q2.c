#include<stdio.h>

int main(){
	
	char trType;
	printf("Select the Transaction Type(Withdrawal-w/Deposit-d) :");
	trType = getchar();
	
	if(trType=='w')
		printf("You have selected to withdraw money\n");
	else if(trType=='d')
		printf("You have selected to deposit money\n");
	else
		printf("You have selected an invalid transaction type\n");
	
	return 0;
}
