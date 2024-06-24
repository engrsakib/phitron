#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n, i, x, ans = -1;
       scanf("%d", &n);
       int ar[n];
       for(i = 0; i < n; i++)
       {
        scanf("%d", &ar[i]);
       }
       scanf("%d", &x);
       for(i = 0; i < n; i++)
       {
        if(ar[i] == x)
        {
            ans = i;
            break;
        }
       }printf("%d", ans);
    return 0;
}

