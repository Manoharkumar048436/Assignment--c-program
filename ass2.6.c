#include <stdio.h>
int main() {
    int n, i, j = 0, k = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n], even[n], odd[n];
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        }
        else {
            odd[k] = arr[i];
            k++;
        }
    }
    printf("Even elements: ");
    for(i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements: ");
    for(i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}
