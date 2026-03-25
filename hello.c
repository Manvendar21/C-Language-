#include <stdio.h>

int main() {

    // 1. FOR LOOP - Print numbers 1 to 5
    printf("=== FOR LOOP ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    // 2. WHILE LOOP - Print even numbers from 2 to 10
    printf("\n=== WHILE LOOP ===\n");
    int n = 2;
    while (n <= 10) {
        printf("Even: %d\n", n);
        n += 2;
    }

    // 3. DO-WHILE LOOP - Runs at least once
    printf("\n=== DO-WHILE LOOP ===\n");
    int x = 1;
    do {
        printf("x = %d\n", x);
        x++;
    } while (x <= 5);

    // 4. NESTED LOOP - Multiplication table (3x3)
    printf("\n=== NESTED LOOP (3x3 Table) ===\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("%d\t", row * col);
        }
        printf("\n");
    }

    // 5. LOOP with BREAK & CONTINUE
    printf("\n=== BREAK & CONTINUE ===\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 4) continue;   // Skip 4
        if (i == 7) break;      // Stop at 7
        printf("i = %d\n", i);
    }

    return 0;
}
