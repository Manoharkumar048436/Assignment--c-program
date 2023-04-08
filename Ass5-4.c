#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    char filename[100];
    char search_string[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];

    // Prompt the user to enter the name of a file and a search string
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    printf("Enter the search string: ");
    scanf("%s", search_string);

    // Open the file for reading
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("opened file\n");
        return 1;
    }

    // Read each line from the file and print it if it contains the search string
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
