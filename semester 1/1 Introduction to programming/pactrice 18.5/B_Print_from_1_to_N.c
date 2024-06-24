#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
void fun(int i, int n)
{
    if (i == n + 1)
        return;
    printf("%d\n", i);
    fun(i + 1, n);
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    fun(1, n);
    return 0;
}
