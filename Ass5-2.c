#include <stdio.h>
typedef struct {
    int id;
    float price;
    char name[50];
} Product;

int main() {
    FILE *file;
    Product product;
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error: could not open binary file\n");
        return 1;
    }
    while (fread(&product, sizeof(Product), 1, file) == 1) {
        printf("ID: %d\n", product.id);
        printf("Name: %s\n", product.name);
        printf("Price: %.2f\n", product.price);
        printf("\n");
    }
    fclose(file);

    return 0;
}