//shalini muthumali
//IT21169076
//group 11.1
//Malabe campus
#include <stdio.h>

int main (void)
{
	int item,qty ;
	float total=0, final=0;
do{	
	printf("\nEnter item    : ");//get first input from the user
	scanf(" %d", &item);
	
if(item!=-1)
{	

	printf("Enter Quantity : ");//get next input from the s
	scanf("%d", &qty);
	
	switch(item)
	{
		case 1 : total=300.25*(float)qty;break;
		case 2 : total=145.50*(float)qty;break;
		case 3 : total=525.00*(float)qty;break;
		
	}
	
	final=total+final;
	total=0;
}

}while(item!=-1);

printf("\nTotal Price to pay Rs : %.2f", final);	
	
	   return 0;
}
