#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

int main() {
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       int n, i;
       scanf("%d", &n);
       long long int A[n];
       for(i = 0; i < n; i++)
       {
        scanf("%lld", &A[i]);
       }
       for(i = 0; i < n; i++)
       {
           A[i];
           if(A[i] <= 10)
           {
               printf("A[%d] = %d\n", i, A[i]);
           }
       }
    return 0;
}
