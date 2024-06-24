#include <stdio.h>
#include <stdbool.h> // Include the boolean data type

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 is not prime
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are not prime
    }
    
    // Check for prime using 6k +/- 1 rule
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int X;
    scanf("%d", &X);

    // Check if X is prime and print the result
    if (isPrime(X)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
