#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#include <conio.h>
#include <limits.h>
#include <ctype.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double m;
    scanf("%lf", &m);
    double result = pow((m + 1 / m), 4);
    printf("%.3f\n", result);
    return 0;
}
