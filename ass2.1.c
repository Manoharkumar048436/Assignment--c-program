#include <stdio.h>
int main() {
    int i,my_array[5] = {10, 20, 30, 40, 50};
    
    printf("Elements of the array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", my_array[i]);
    }
    
    my_array[2] = 35;
    
    printf("\nUpdated elements of the array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", my_array[i]);
    }
    
    return 0;
}

