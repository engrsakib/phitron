#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n;
       scanf("%d", &n);
       int ar[n];
       for(int i = 0; i <= n - 1; i++)
       {
        scanf("%d", &ar[i]);
       }
       for(int i = 0; i < n; i++)
       {
        printf("%d ", ar[i]);
       }
       printf("\n");
       int pos;
       scanf("%d", &pos);
       for(int i = pos; i < n - 1; i++)
       {
        ar[i] = ar[i + 1];
       }
       for(int i = 0; i < n - 1; i++)
       {
        printf("%d ", ar[i]);
       }
    return 0;
}
