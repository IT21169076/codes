#include <stdio.h>
#include <string.h>


int main()
{
    char str[256];
    int n, i;
    int isPalindrome=1;

    scanf("%s", str);
    n = strlen(str);

    for (i=0; i<n/2; i++) {
        if (tolower(str[i]) != tolower(str[n-1-i])) {
            isPalindrome = 0;
            break;
        }
    }
    printf("Word \"%s\" %s a palindrome\n", str,
            isPalindrome ? "is" : "is not");
    return 0;
}
