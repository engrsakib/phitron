#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n, min = INT_MAX, pos;
       scanf("%d", &n);
       int ar[n];
       for(int i = 0; i < n; i++)
       {
        scanf("%d", &ar[i]);
       }
       for(int i = 0; i < n; i++)
       {
        if(ar[i] < min)
        {
            min = ar[i];
            pos =   i + 1;
        }
       }
       printf("%d %d\n", min, pos);

    return 0;
}
