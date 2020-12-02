#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int data[200];
    FILE *file = fopen("input.txt", "r");
    for (unsigned int i = 0; i < 200; i++) {
         fscanf(file, "%u\n", &data[i]);
    }

    for (unsigned int i = 0; i < 200; i++) {
        printf("%u\n", data[i]);
    }

    fclose(file);
    exit(EXIT_SUCCESS);
}
