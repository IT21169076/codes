#include<stdio.h>

int main(void) {
	
	float temp[2][3];
	float avgTemp[2] = {0};
	float totalTemp;
	int i,j;
	for(i = 0; i < 2; i++) {
		totalTemp = 0;
		printf("\nEnter Temperature(morning, noon, evening) of city %d\n", i+1);
		for( j = 0; j < 3; j++) {	
			printf(" Enter %d time: ", j+1);
			scanf("%f", &temp[i][j]);
			totalTemp += temp[i][j];
		}
		avgTemp[i] = totalTemp / 3.0;
	}

	for(i = 0; i < 2; i++) {
		printf("\n Avarage Temperature of city %d: %.1f", i+1, avgTemp[i]);
	}

	return 0;
}

