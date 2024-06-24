#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>
void fun(int n)
{
    if (n == 1)
    {
        printf("1");
        return;
    }
    printf("%d ", n);
    fun(n - 1);
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}
