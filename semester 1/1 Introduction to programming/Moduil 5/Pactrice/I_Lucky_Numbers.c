#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tens_digit = N / 10;
    int ones_digit = N % 10; 
    if (tens_digit == 0 || ones_digit == 0 || tens_digit % ones_digit == 0 || ones_digit % tens_digit == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
