#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <limits.h>

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char a[10001];
        scanf("%s", a);
            int cap = 0, smal = 0, num = 0;
            for(int i = 0; a[i] != '\0'; i++)
            {
                if(a[i] >= 'A' && 'Z' >= a[i])
                {
                    cap++;
                }
                else if(a[i] >= 'a' && 'z' >= a[i])
                {
                    smal++;
                }
                else if(a[i] >= '0' && '9' >= a[i])
                {
                    num++;
                }

            }
     printf("%d %d %d\n", cap, smal, num);   
    }
    return 0;
}
