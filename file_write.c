#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("output.txt", "w");
    fprintf(fp, "Hello, this is my file.");
    fclose(fp);

    printf("Data written to file");

    return 0;
}