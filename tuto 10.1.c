#include<stdio.h>
int main(void)
{
	FILE *num;  //Declaring a file pointer
	num = fopen("number .dat" , "r+");  //Open an existing fil for update 
	
	int number;
	int fil_num , i=0 , j=0;
	int save_number[5] = {0};
	int f;
	
	//check if file is open or not
	if(num == NULL)
	{
	printf("File Not Open....");
	return -1;
	}
	
	//read data from file and store in an array
	fscanf(num , "%d" , &fil_num );
	while(!feof(num))
	{
	save_number[i] = fil_num ;
	fscanf(num , "%d" , &fil_num );
	i++;
	}
	
	//geting input
	printf("Enter Number :");
	scanf("%d" , &number);
	

	//check the input number is available in the file or not
	for(j=0 ; j<i ; j++)
	{
	if(number == save_number[j])
	{
	f = 0;
	break;
	}
	else
	{
	f = 1;
	}			
	}

	//output
	if(f == 0)
	printf("Error...number already exist in the file\n");
	else
	fprintf(num , "%d\n" , number);
	
	
	fclose(num); //closing file
	
	return 0;
}

