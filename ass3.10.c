#include <stdio.h>

#define MAX_SIZE 100

void copyArray(int *source, int *destination, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        *(destination+i) = *(source+i);
    }
}

int main()
{
    int source[MAX_SIZE], destination[MAX_SIZE];
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }
    copyArray(source, destination, size);
    printf("Elements of the source array:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", source[i]);
    }
    printf("\nElements of the destination array:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", destination[i]);
    }

    return 0;
}

