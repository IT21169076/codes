#include<stdio.h>
int main() {
 int Motion[5];


 int i;
 int tempValue;
 for(i=0;i<5;++i)
 {
 printf("Enter the value %d: ",(i+1));
 scanf("%d",&Motion[i]);
 }
 printf("Original array:\n");
 for( i=0;i<5;++i){
 printf("%d ",Motion[i]);
 }
 tempValue = Motion[0];
 for ( i = 0; i < 4; i++){
 Motion[i] = Motion[i + 1];
 }
 Motion[4] = tempValue;
 printf("\n\nArray after rotation by one position in the forward direction:\n");
 for(i=0;i<5;++i){
 printf("%d ",Motion[i]);
 }
 getchar();
 getchar();
 return 0;
}
