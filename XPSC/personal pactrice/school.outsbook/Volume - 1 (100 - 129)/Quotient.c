#include <stdio.h>

int main() {
    int X1, Q1, R1, X2;
    int Q2, R2;
    scanf("%d %d %d %d", &X1, &Q1, &R1, &X2);
    int N = (X1 * Q1) + R1;
    Q2 = N / X2;
    R2 = N % X2;
    printf("%d %d\n", Q2, R2);

    return 0;
}
