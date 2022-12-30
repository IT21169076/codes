#include<stdio.h>

int main(){

float r,area,circumference;

puts("Enter circle radius: ");
scanf("%f",&r);

area = (3.14)*r*r;
circumference = 2*3.14*r;

printf("Area is : %.2f\n",area);
printf("Circumference is : %.2f\n",circumference);
return 0;
}
