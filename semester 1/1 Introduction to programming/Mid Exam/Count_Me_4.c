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
    char a[10001];
    scanf("%s", a);
    int count[26] = {0};
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            int b = a[i] - 'a';
            count[b]++;
        }
    }
    for(int i = 0; i <= 25; i++)
    {
        if (count[i] > 0)
        {
            char c = i + 'a';
            printf("%c - %d\n", c, count[i]);
        }
    }
    return 0;
}
