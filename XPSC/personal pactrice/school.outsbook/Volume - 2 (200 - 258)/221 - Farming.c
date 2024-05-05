#include <stdio.h>

int main() {
    int M, P, C, D;

    scanf("%d %d %d %d", &M, &P, &C, &D);
        int a = ((M - P) / 5) - 1;
        int b = (C * D) * 9;
        printf("%d %d", a, b);
    return 0;
}
