#include<stdio.h>

int main()
{
	
	
	int i = 1,number;
	printf("Enter Number :");
	scanf("%d",&number);
	
	
	while(number<0)
	{
		printf("Invalid Number\n");
		printf("Enter Number :");
		scanf("%d",&number);
		
	}
	while(i<=10)
	{
			printf("%d X %d = %d\n",number,i,number*i);
			i++;
		}
	
	
	return 0;
}
