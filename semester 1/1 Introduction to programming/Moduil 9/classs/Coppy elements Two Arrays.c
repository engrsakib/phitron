#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n, m;
       scanf("%d", &n);
       int ar[n];
       for(int i = 0; i < n; i++)
       {
        scanf("%d", &ar[i]);
       }
        scanf("%d", &m);
       int ar2[m];
       for(int i = 0; i < m; i++)
       {
        scanf("%d", &ar2[i]);
       }
       int result[m + n];
       for(int i = 0; i < n; i++)
       {
        result[i] = ar[i];
       }
       int i = n;
       for(int j = 0; j < m; j++)
       {
        result[i] = ar2[j];
        i++;
       }
       for(int i = 0; i < m + n; i++)
       {
        printf("%d ",result[i]);
       }
    return 0;
}
