#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, product, quotient;

    // Reading two integer inputs
    if (scanf("%d %d", &num1, &num2) == 2) {
        
        // Performing arithmetic operations
        sum = num1 + num2;
        diff = num1 - num2;
        product = num1 * num2;
        
        // Integer division to match the sample test cases (e.g., 7 / 3 = 2)
        if (num2 != 0) {
            quotient = num1 / num2;
            // Displaying the results in the exact requested format
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }

    return 0;
}
