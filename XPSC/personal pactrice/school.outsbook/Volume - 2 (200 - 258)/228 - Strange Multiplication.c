#include <stdio.h>

int main() {
    int M, N;
    int result;

    scanf("%d %d", &M, &N);

    result = (M * N) - (M + N);

    printf("%d\n", result);

    return 0;
}
