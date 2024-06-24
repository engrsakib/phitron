#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! and 1! are both 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        // Calculate and print the factorial of N
        unsigned long long result = factorial(N);
        printf("%llu\n", result);
    }

    return 0;
}
