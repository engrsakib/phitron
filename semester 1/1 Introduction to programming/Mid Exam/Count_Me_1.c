#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n, divby2 = 0, divby3 = 0;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i <= n - 1; i++) 
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i <= n - 1; i++) 
    {
       if (num[i] % 2 == 0) 
        {
            divby2++;
        }
        else if (num[i] % 3 == 0) 
        {
            divby3++;
        }
    }

    printf("%d %d\n", divby2, divby3);

    return 0;
}
