#include <stdio.h>
#include <math.h>

int main() {
    double S, H;

    while (scanf("%lf %lf", &S, &H) == 2) {
        double length = sqrt(S * S + H * H);
        printf("%.2lf\n", length);
    }

    return 0;
}
