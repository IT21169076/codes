#include<stdio.h>

struct Employee{
	char employeeId[4];
	char name[10];
	int experience;
	float salary;
	
};

int main(){
	
	struct Employee Employee[3];
	int i;
	float increment;
	for(i=0;i<=2;i++){
		printf("Enter %d Employee ID : ",i+1);
		scanf("%s",&Employee[i].employeeId);
		printf("Enter Employee Name : ");
		scanf("%s",&Employee[i].name);
		printf("Enter Work Experience (In years) : ");
		scanf("%d",&Employee[i].experience);
		printf("Enter Salary : ");
		scanf("%f",&Employee[i].salary);
		if(Employee[i].experience>2){
			increment = Employee[i].salary*10/100;
			Employee[i].salary += increment;
		}
		printf("%d Employee Details : \n",i+1);
		printf(" %s %.2f",Employee[i].employeeId,Employee[i].name,increment);
		increment=0.00;
		printf("\n");
		
	}
	
		for(i=0;i<=2;i++){
	
	}
	
	
	
	return 0;
}
