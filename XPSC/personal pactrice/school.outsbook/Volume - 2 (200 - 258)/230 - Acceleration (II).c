#include <stdio.h>

int main() {
    double X, Y, T;
    scanf("%lf %lf %lf", &X, &Y, &T);
    
    double A = (Y - X) / T;
    double S = X * T + 0.5 * A * T * T;
    
    printf("%.1lf\n%.1lf\n", A, S);
    
    return 0;
}
