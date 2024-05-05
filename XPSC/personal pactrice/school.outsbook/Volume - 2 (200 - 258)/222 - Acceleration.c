#include <stdio.h>

int main() {
    int x, y, t;
    int a;

    scanf("%d %d %d", &x, &y, &t);

    a = (y - x) / t;

    printf("%d\n", a);

    return 0;
}
