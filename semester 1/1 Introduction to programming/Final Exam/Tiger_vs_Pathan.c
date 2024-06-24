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
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        char rounds[n + 1];
        scanf("%s", rounds);

        int tw = 0, pw = 0;

        for (int i = 0; i < n; i++)
        {
            if (rounds[i] == 'T' || rounds[i] == 't')
            {
                tw++;
            }
            else if (rounds[i] == 'P' || rounds[i] == 'p')
            {
                pw++;
            }
        }

        if (tw > pw)
        {
            printf("Tiger\n");
        }
        else if (pw > tw)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}
