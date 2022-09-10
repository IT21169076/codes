#include<stdio.h>

float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main(void) {
	
	int grade;
	float hrsWorked, salary;
	
	printf("\nEnter grade: ");
	scanf("%d", &grade);
	
	//as you wish TODO: Remove this cmnt if validation use
	if(grade < 1 || grade > 3 ) {
		printf("Invalid grade type!! Try again.\n");
		return 0;
	}
	
	printf("Enter number of hours: ");
	scanf("%f", &hrsWorked);
	
	salary = calculateWeeklySalary(grade, hrsWorked);
			
	printDetails(grade, hrsWorked, salary);
	
	return 0;
}

float calculateWeeklySalary(int grade, float hrsWorked) {
	switch (grade) {
		case 1:
			return hrsWorked * 100;
		case 2:
			return hrsWorked * 200;
		case 3:
			return hrsWorked * 300;
		default:
			return 0;
	}
}

void printDetails(int grade, float hrsWorked, float salary) {
	printf("\n\nGrade : %d\n", grade);
	printf("Number of hours : %.2f\n", hrsWorked);
	printf("Salary : %.2f\n", salary);
}

