#include<stdio.h>

int main(){
	//food seen
	int persons,pkgType,qty;
	float pkgPrice=0.0,foodPrice = 0.0,bilAmount=0.0;
	char foodType;
	
	printf("Enter Package No :");
	scanf("%d",&pkgType);
	
	if(pkgType==1){
		pkgPrice=15000.00;	
	}else if(pkgType==2){
		pkgPrice=30000.00;	
	}else{
		printf("invalid package type");
	}
	
	printf("Enter Food Type : ");
	scanf(" %c",&foodType);
	
	if(foodType=='s'||foodType=='S'){
		printf("Snack");
		printf("Enter Quantity :");
		scanf("%d",&qty);
		foodPrice=1500.00;
		bilAmount = pkgPrice+foodPrice*qty;
		printf("Your Totaly Amount is %.2f",bilAmount);
			
	}else if(foodType=='d'|| foodType=='D') {
		printf("Dinner");
		printf("Enter Quantity :");
		scanf("%d",&qty);
		foodPrice=3000.00;
		bilAmount = pkgPrice+foodPrice*qty;
		printf("Your Totaly Amount is %.2f",bilAmount);
	}else if(foodType=='l'|| foodType=='L'){
		printf("Lunch");
		printf("Enter Quantity :");
		scanf("%d",&qty);
		foodPrice=2500.00;
		bilAmount = pkgPrice+foodPrice*qty;
		printf("Your Totaly Amount is %.2f",bilAmount);
	}else{
		printf("Invalid food Type");
	}
	
	
	
	

	return 0;
}
	

	
	
	

