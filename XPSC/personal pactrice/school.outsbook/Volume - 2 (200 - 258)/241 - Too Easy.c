#include <stdio.h>

int main() {
    int N, P, D;
    scanf("%d %d %d", &N, &P, &D);

    int number = (D + P) / N;
    printf("%d\n", number);

    return 0;
}
