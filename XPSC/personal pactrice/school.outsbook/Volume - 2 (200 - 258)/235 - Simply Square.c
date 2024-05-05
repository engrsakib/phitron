#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int step1 = a * a;
    int step2 = 0;

    while (step1 > 0) {
        step2 += step1 % 10;
        step1 /= 10;
    }

    int step3 = step2 * step2;
    int step4 = a * a - step3;
    int step5 = step4 * step4;

    int ones_digit = step5 % 10;
    printf("%d\n", ones_digit);

    return 0;
}
