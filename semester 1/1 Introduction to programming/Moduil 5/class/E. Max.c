#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n, max = INT_MIN, a;

       scanf("%d", &n);
       for(int i = 1; i <= n; i++)
       {
        scanf("%d", &a);
        if(max < a)
        {
            max = a;
        }
       }
       printf("%d", max);
    return 0;
}
