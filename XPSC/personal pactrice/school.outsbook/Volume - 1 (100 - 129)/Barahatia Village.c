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
    int n, p;
    scanf("%d %d", &n, &p);
    int par = 100;
    int sum = (n * p) / par;
    printf("%d", sum);
    return 0;
}
