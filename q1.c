#include<stdio.h>

float calAdditionalCharges(int,float);
float calTotalBill(float,float);

int main(){
	float subTotal=0.00;
	int orderType;
	
	
	printf("Enter SubTotal : ");
	scanf("%f",&subTotal);
	
	printf("Enter Order Type : ");
	scanf("%d",&orderType);
	float additionalCharges = calAdditionalCharges(orderType,subTotal);
	float finalBill = calTotalBill(subTotal,additionalCharges);
	printf("Total Bill Amount %.2f",finalBill);
	
	return 0;
}

float calAdditionalCharges(int orderType,float subTotal){
	float additionalCharges;
	if(orderType==1){
		return (subTotal*0.22);
	}else if(orderType==2){
		return (subTotal*0.12);
	}else if (orderType==3){
		return (subTotal*0.17);
	}else {
		return 0;
	}
}

float calTotalBill(float subTotal,float charges){
	return subTotal+charges;
}

