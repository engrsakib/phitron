#include <stdio.h>

int main()
{
    double X, Y, profit;

    scanf("%lf %lf", &X, &Y);

    profit = ((Y - X) / X) * 100;
    profit *= -1;
    
    printf("%.0lf\n", profit);

    return 0;
}
