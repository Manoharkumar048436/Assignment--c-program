#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i, len, sum = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        sum += str[i];
    }
    printf("Sum of ASCII values of all characters in the string: %d\n", sum);
    return 0;
}

