#include <stdio.h>
#include <string.h>
#define WORD_SIZE 150

int main(void) 
{
	
	char str[WORD_SIZE];
	char riversWord[WORD_SIZE];
	int i, j = 0;
	
	printf("Enter Word: ");
	scanf("%s", &str);
	
	for(i = (strlen(str) - 1); i >= 0; i--)
    {
	riversWord[j++] = str[i];
	}
	
	if(strcmp(strlwr(str), strlwr(riversWord)) == 0) 
	{
	printf("\n %s is a palindrome \n", str);
	} else 
	{
	printf("\n %s is a not a palindrome \n", str);
	}
	
	return 0;
}

