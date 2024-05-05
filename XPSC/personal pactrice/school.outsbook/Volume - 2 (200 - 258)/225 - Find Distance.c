#include <stdio.h>

int main() {
    int d1, d2, t, distance;

    scanf("%d %d %d", &d1, &d2, &t);

    distance = (d1 * t * d2) / (d2 - d1);

    printf("%d\n", distance);

    return 0;
}
