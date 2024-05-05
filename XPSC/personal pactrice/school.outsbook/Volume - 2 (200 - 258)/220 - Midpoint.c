#include <stdio.h>

int main() {
    double x1, y1, x2, y2, mx, my;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    mx = (x1 + x2) / 2.0;
    my = (y1 + y2) / 2.0;

    printf("%.0lf %.0lf\n", mx, my);

    return 0;
}
