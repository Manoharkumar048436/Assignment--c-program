#include <stdio.h>
int isPrime(int num);
int main()
{
    int start, end, i, flag;
    printf("Enter two numbers : ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for(i=start+1; i<end; i++)
    {
        flag = isPrime(i);
        if(flag == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
int isPrime(int num)
{
    int j, flag = 1;
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

