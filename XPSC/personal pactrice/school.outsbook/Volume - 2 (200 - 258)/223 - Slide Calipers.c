#include <stdio.h>

int main() {
    int m, v;
    float l;

    scanf("%d %d", &m, &v);

    l = m + (v / 10.0);
    l = l / 10;
    printf("%.2f cm\n", l);

    return 0;
}
