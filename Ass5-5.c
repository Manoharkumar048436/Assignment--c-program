#include <stdio.h>
#include <ctype.h>
#define ALPHABET_SIZE 26
int main() {
    FILE *input_file, *output_file;
    int counts[ALPHABET_SIZE] = {0};
    char c;
    input_file = fopen("data.txt", "r");
    if (input_file == NULL) {
        printf("Error: could not open input file\n");
        return 1;
    }
    while ((c = fgetc(input_file)) != EOF) {
        if (isalpha(c)) {
            counts[tolower(c) - 'a']++;
        }
    }
    fclose(input_file);
    output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Error: could not open output file\n");
        return 1;
    }
    for (i = 0; i < ALPHABET_SIZE; i++) {
        fprintf(output_file, "%c: %d\n", i + 'a', counts[i]);
    }
    fclose(output_file);

    return 0;
}