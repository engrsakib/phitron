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
    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        int line = (n - 1) / 2 + 6;
        int space = line - 1;
        int star = 1;
        for (int i = 1; i <= line; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= star; k++)
            {
                printf("*");
            }
            space--;
            star = star + 2;
            printf("\n");
        }
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
