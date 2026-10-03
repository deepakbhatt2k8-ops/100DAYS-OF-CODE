#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    // Reading length and breadth from the input
    if (scanf("%d %d", &length, &breadth) == 2) {
        
        // Calculating area and perimeter
        area = length * breadth;
        perimeter = 2 * (length + breadth);

        // Displaying the results in the exact requested format
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }

    return 0;
}

