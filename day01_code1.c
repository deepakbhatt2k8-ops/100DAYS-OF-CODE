#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Taking two numbers as input from the user
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Calculating the sum
        sum = num1 + num2;

        // Displaying the result matching the sample output format
        printf("Sum = %d\n", sum);
    }

    return 0;
}
