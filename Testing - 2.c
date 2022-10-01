/*
ex 3
*/
#include <stdio.h>

#define SP_LEN 4 
#define PROD_LEN 5 

int main() {
	
	int sales[SP_LEN][PROD_LEN], productByTotal[PROD_LEN] = {0};
	int personByTotal[SP_LEN] = {0};
	int i,j;
	for( i = 0; i < SP_LEN; i++) {
		printf("\nSales Person %d\n", i+1);
		for( j = 0; j < PROD_LEN; j++) {
			printf("Product %d\n", j+1);
			printf(" Enter total value of sold products: $");
			scanf("%d", &sales[i][j]);
		}
	}
	
	for( i = 0; i < PROD_LEN; i++) {
		for( j = 0; j < SP_LEN; j++) {
			productByTotal[i] += sales[j][i];
		}
		printf("\n Product %d total sales : $%d \n", i+1, productByTotal[i]);
	}
	
	for( i = 0; i < SP_LEN; i++) {
		for( j = 0; j < PROD_LEN; j++) {
			personByTotal[i] += sales[i][j];
		}
		printf("\n Person %d total sales : $%d \n", i+1, personByTotal[i]);
	}
	
	return 0;                      
}

