#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1000
int main() {
    FILE *input_file, *error_log_file;
    char line[MAX_LINE_LENGTH];
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error: could not open input file\n");
        return 1;
    }
    error_log_file = fopen("error_log.txt", "w");
    if (error_log_file == NULL) {
        printf("Error: could not open error log file\n");
        fclose(input_file);
        return 1;
    }
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        if (strstr(line, "error") != NULL) {
            fprintf(error_log_file, "%s", line);
        }
    }
    fclose(input_file);
    fclose(error_log_file);
    error_log_file = fopen("error_log.txt", "r");
    if (error_log_file == NULL) {
        printf("Error: could not open error log file\n");
        return 1;
    }
    printf("Error log:\n");
    while (fgets(line, MAX_LINE_LENGTH, error_log_file) != NULL) {
        printf("%s", line);
    }
    fclose(error_log_file);

    return 0;
}