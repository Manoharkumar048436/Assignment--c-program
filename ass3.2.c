#include <stdio.h>
int isPrime(int num);
int main()
{
    int num, i, flag = 0;
    printf("Enter positive integer: ");
    scanf("%d", &num);
    for(i=2; i<=num/2; i++)
    {
        if(isPrime(i) == 1)
        {
            if(isPrime(num-i) == 1)
            {
                printf("%d can be expressed as the sum of %d and %d.\n", num, i, num-i);
                flag = 1;
            }
        }
    }
    if(flag == 0)
    {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }
    return 0;
}
int isPrime(int num)
{
    int j, flag = 1;
    if(num == 1)
    {
        flag = 0;
    }
    for(j=2; j<=num/2; j++)
    {
        if(num%j == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

