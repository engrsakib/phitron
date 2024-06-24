#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
#include <ctype.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n; 
       scanf("%d", &n);
       int k = n;
       for(int i = 1; n >= i; i++)
       {
        for(int j = 1; j <= k; j++)
        {
            printf("# ");
        }
        printf("\n");
        k--;
       }
    return 0;
}
