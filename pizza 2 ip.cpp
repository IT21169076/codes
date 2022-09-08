//shalini muthumali
//IT21169076
//group 11.1
//Malabe campus

#include <stdio.h>

int main (void)
{
	int type, qty;//input varialble
	float total;
do{	
	printf("\nEnter Pizza Type :  ");
	scanf("%d", &type);
	
	if(type!=-1)
	{
	printf("Enter Quantity   :  ");
	scanf("%d", &qty);
	
	switch(type)
	{
		case 1:
			
			total=(float)qty*1000.00;
			
			if(qty>=3)	total= total*90/100.00;break;
            	
		case 2:
			
			total=(float)qty*1600.00;
			
			if(qty>=3)	total= total*88/100.00;break;
    
		case 3:
			
			total=(float)qty*1400.00;
			
			if(qty>=3)  total= total*85/100.00;break;     	
	}
	
	printf("Total price Rs. : %.2f\n\n", total);
    }
	
}
while(type!=-1);
	
	return 0;
}
