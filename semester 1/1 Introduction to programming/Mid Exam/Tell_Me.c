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

    for(int i = n; i > 0; i--)
    {
        int a;
        scanf("%d", &a);

        int arr[a];

        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }

        int b, c = 0;
        scanf("%d", &b);

        for (int i = 0; i < a; i++)
        {
            if (arr[i] == b)
            {
                c = 1;
                break;
            }
        }

        if (c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
