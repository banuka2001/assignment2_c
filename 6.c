#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the top half

    // Top Half
    for (int i = 1; i <= rows; i++) {
        // Print i stars for each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Bottom Half
    for (int i = rows - 1; i >= 1; i--) {
        // Print i stars for each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
