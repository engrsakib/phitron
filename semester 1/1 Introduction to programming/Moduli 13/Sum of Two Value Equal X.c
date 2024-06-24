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
    int s, n;
    printf("Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Array alement: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Summation: ");
    scanf("%d", &s);
    int i, j, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // printf("%d%d ", i, j);
            if (arr[i] + arr[j] == s)
            {
                flag = 1;
            }
        }
    }
    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
