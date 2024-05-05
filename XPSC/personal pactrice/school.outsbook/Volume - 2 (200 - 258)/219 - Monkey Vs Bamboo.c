#include <stdio.h>

int main() {
    int H, M, N;
    scanf("%d %d %d", &H, &M, &N);

    int minutes = ((H - M - 1) / (M - N)) + 2;

    printf("%d\n", minutes * 2 - 1);

    return 0;
}
