#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, sum, sub;
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    float div = (float)sum / sub;
    float mux = (float)sum * sub;
    mux = sqrt(mux);
    printf("%.2f\n", div);
    printf("%.2f", mux);
    return 0;
}
