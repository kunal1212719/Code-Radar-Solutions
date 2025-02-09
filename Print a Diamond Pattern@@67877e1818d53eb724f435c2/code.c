gram to Print Diamond Pattern:
c
Copy
Edit
#include <stdio.h>

int main() {
    int i, j, n;

    // Ask the user for the number of rows for half of the diamond
    scanf("%d", &n);

    // Top half of the diamond (including the middle row)
    for(i = 1; i <= n; i++) {
        // Printing spaces before the stars
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    // Bottom half of the diamond (excluding the middle row)
    for(i = n - 1; i >= 1; i--) {
        // Printing spaces before the stars
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }