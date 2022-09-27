#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main (void){
 int integerArray[]={1,2,3,5,8,4,5,8,7,4,2,4,5,6,5,1,2,2,5,6,2,2,5,5,5,6,9,5,2,3,6,5,4,5,5,5,6};
 int counterArray[10]={0};
 int i,j;


 for(i=0;i<sizeof(integerArray)/sizeof(integerArray[0]);i++){
 counterArray[integerArray[i]]++;
 
 }


 for(i=0;i<10;i++){
 printf("%d %d ",i,counterArray[i]);
 for(j=0;j<counterArray[i];j++){
 printf("*");
 }
 printf("\n");
 }
 getchar();
 getchar();
}
