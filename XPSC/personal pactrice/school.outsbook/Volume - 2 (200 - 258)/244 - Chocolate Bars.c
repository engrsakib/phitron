#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// #include <conio.h>
#include <limits.h>
#include <ctype.h>

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long m, n;
    scanf("%lld %lld", &m, &n);

    long long rima = n - m;
    long long tina = rima * 3;
    long long ch = m + rima + tina;
    printf("%lld\n", ch);

    return 0;
}
