#include <stdio.h>
int main() 
{
    int arr[] = {10,15,90,200,110};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_diff = arr[1] - arr[0];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] - arr[i] > max_diff) {
                max_diff = arr[j] - arr[i];
            }
        }
    }

    printf("The maximum difference is %d", max_diff);

    return 0;
}
