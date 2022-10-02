#include <stdio.h>
//function
#define SIZE 5

int main() {

	int motion[SIZE];
	int =i;
	printf("Enter values: \n");
	
	for(i = 0; i < SIZE; i++) {
	scanf("%d", &motion[i]);
	}
	
	printf("\nInitial values: \t");
	int i;
	for(i = 0; i < SIZE; i++) {
	printf("%d ", motion[i]);
	}
	
	printf("\nAfter rotating: \t");
	
	for( i = 1; i < SIZE; i++) {
	printf("%d ", motion[i]);
	if(i == (SIZE - 1)) {
	printf("%d ", motion[0]);
	}
	}
	
	return 0;                      
}//end function
